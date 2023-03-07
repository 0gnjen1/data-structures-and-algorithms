#include <bits/stdc++.h>

using namespace std;


const int MOD = 1000000007;

int main(){

    int n; cin >> n;
    int dp[n+1] = {0};
    for(int i=1; i<=min(6, n); i++) dp[i] = 1;

    for(int i=1; i<(n+1); i++){

        for(int j=1; j<=6; j++){

            if( (i-j) < 1 ) continue;

            dp[i] += dp[i-j];
            dp[i] %= MOD;

        }

    }

    cout << dp[n] << endl;

}
