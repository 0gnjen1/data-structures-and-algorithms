#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    set<int> vals;
    unordered_map<int, int> times;

    for(int i=0; i<n; i++){

        int x, y; cin >> x >> y;

        vals.insert(x-y);
        times[x-y]++;

    }

    int64_t ans = 0;

    for(auto val : vals){

        int64_t cnt = (int64_t)times[val];

        ans += (cnt*(cnt-1))/2;

    }

    cout << ans << endl;

}
