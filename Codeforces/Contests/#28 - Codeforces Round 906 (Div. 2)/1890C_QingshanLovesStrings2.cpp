#include <bits/stdc++.h>

using namespace std;

bool isPossible(string str){
    if(str.size()%2) return false;
    int onecnt = 0;
    int zerocnt = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i] == '0') zerocnt++;
        if(str[i] == '1') onecnt++;
    }
    if(zerocnt != onecnt) return false;
    return true;
}

void solve(vector<int>& answer, int tail, string str){

    if(str.size() == 0) return;

    if(str[0] != str[str.size()-1]){
        solve(answer, tail+1, str.substr(1, str.size()-2));
        return;
    }

    if(str[0] == '0'){
        answer.push_back(tail+str.size());
        str.insert(str.size(), "01");
        solve(answer, tail, str);
        return;
    }

    if(str[0] == '1'){
        answer.push_back(tail);
        str.insert(0, "01");
        solve(answer, tail, str);
        return;
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        string s; cin >> s;

        bool possible = isPossible(s);
        if(!possible){
            cout << -1 << '\n';
            continue;
        }

        vector<int> ans;
        solve(ans, 0, s);
        cout << ans.size() << '\n';
        for(auto& a : ans) cout << a << ' ';
        cout << '\n';

    }

}
