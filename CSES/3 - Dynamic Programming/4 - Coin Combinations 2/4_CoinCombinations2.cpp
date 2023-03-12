#include<bits/stdc++.h>

using namespace std;

const int MOD = 1000000007;

int main(){

    int n, x; cin >> n >> x;
    int dp[x+1] = {0};
    int coins[n];
    for(auto& c : coins) cin >> c;
    sort(coins, coins + n);

    for(int i=0; i<n; i++){

        if(coins[i] <= x) dp[coins[i]] += 1;

        for(int j=0; j<(x+1); j++){

            if(j+coins[i] > x) break;

            dp[j+coins[i]] += dp[j];
            dp[j+coins[i]] %= MOD;

        }

    }

    cout << dp[x] % MOD << endl;

}
