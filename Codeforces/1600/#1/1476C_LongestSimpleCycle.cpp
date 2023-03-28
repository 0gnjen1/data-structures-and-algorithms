#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int64_t c[n];
        for(auto& x : c) cin >> x;
        int64_t a[n];
        for(auto& x : a) cin >> x;
        int64_t b[n];
        for(auto& x : b) cin >> x;

        int64_t dp[n] = {0};
        dp[1] = c[1] - 1 + 2 + (abs(b[1] - a[1]));
        for(int i=2; i<n; i++){

            if(a[i] == b[i]){
                dp[i] = c[i] + 1;
                continue;
            }

            dp[i] = max(c[i] + 1 + abs(b[i] - a[i]), dp[i-1] + c[i] + 1 - abs(b[i] - a[i]));

        }

        int64_t maxi = 0;
        for(auto& x : dp){
            maxi = max(maxi, x);
        }

        cout << maxi << endl;

    }

}
