#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

int main(){

    vector<vector<int64_t>> dp (1e6+1, vector<int64_t>(2, 0));

    dp[1][0] = 1;
    dp[1][1] = 1;

    for(int i=1; i<1e6; i++){

        dp[i+1][0] += ((dp[i][1] % MOD) + (2*((dp[i][0]) % MOD)) % MOD) % MOD;
        dp[i+1][0] %= MOD;

        dp[i+1][1] += ((dp[i][0] % MOD) + (4*((dp[i][1]) % MOD)) % MOD) % MOD;
        dp[i+1][1] %= MOD;

    }

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        cout << (dp[n][0] + dp[n][1]) % MOD << endl;

    }

}
