#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x; cin >> n >> x;
    vector<vector<int>> dp(n, vector<int>(x+1));
    int prices[n];
    for(auto& p : prices) cin >> p;
    int pages[n];
    for(auto& p : pages) cin >> p;

    for(int i=prices[0]; i<(x+1); i++) dp[0][i] = pages[0];

    for(int i=1; i<n; i++){

        for(int j=0; j<x+1; j++){

            if(prices[i] > j){
                dp[i][j] = dp[i-1][j];
                continue;
            }

            dp[i][j] = max(pages[i] + dp[i-1][j-prices[i]], dp[i-1][j]);

        }

    }

    cout << dp[n-1][x];

}
