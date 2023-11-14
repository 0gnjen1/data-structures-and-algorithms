#include <bits/stdc++.h>

using namespace std;

void solve(int l, int r, int combo, vector<int>& hordes, int64_t& answer){

    if(combo == hordes[r]){
        combo = 0;
        answer++;
        if(l == r) return;
        solve(l, r-1, combo, hordes, answer);
        return;
    }

    if(l == r){
        answer += (int64_t)((int)(hordes[l]-combo)/2 + (int)(hordes[l]-combo)%2 + 1);
        if(hordes[l] == 1) answer--;
        return;
    }

    if(combo+hordes[l] > hordes[r]){
        hordes[l] -= (hordes[r]-combo);
        answer += (int64_t)(hordes[r]-combo);
        combo += (hordes[r]-combo);
        solve(l, r, combo, hordes, answer);
        return;
    }

    combo += hordes[l];
    answer += (int64_t)hordes[l];
    solve(l+1, r, combo, hordes, answer);
    return;

}



int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        vector<int> hrds (n);
        for(int& hrd : hrds) cin >> hrd;

        sort(hrds.begin(), hrds.end());

        int64_t ans = 0;
        solve(0, hrds.size()-1, 0, hrds, ans);

        cout << ans << '\n';

    }

}
