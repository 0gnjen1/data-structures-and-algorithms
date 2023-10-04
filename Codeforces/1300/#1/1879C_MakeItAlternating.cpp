#include <bits/stdc++.h>
using namespace std;

int64_t MOD = 998244353;

int count_single_interval(string& str, int& i){

    int cnt = 1;
    while((i+cnt) < str.length() && str[i+cnt-1]==str[i+cnt]) cnt++;
    i+=cnt;
    return cnt;

}

vector<int> count_intervals(string& str){

    vector<int> intervals;
    int i = 0;
    while(i<str.length()){
        intervals.push_back(count_single_interval(str, i));
    }
    return intervals;

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){

        string s; cin >> s;
        vector<int> intrvls = count_intervals(s);
        int64_t ans1 = 0;
        int64_t ans2 = 1;
        int64_t mul = s.length() - intrvls.size();
        for(auto intr : intrvls){
            ans1+=(int64_t)(intr-1);
            ans2*=(int64_t)intr;
            ans2%=MOD;
        }
        while(mul){
            ans2*=mul;
            ans2%=MOD;
            mul--;
        }
        cout << ans1 << ' ' << ans2 << '\n';

    }

}
