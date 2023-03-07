#include <bits/stdc++.h>

using namespace std;

const int INF = 1000002;

int main(){

    int n, x; cin >> n >> x;

    int dp[x+1];
    for(int i=0; i<(x+1); i++){
        dp[i] = INF;
    }

    int coins[n];
    for(int i=0; i<n; i++){
        int c; cin >> c;
        coins[i] = c;
        if(c<=x) dp[c] = 1;
    }

    for(int i=1; i<(x+1); i++){

        for(auto& c : coins){

            if( (i+c) > x ) continue;

            dp[i+c] = min(dp[i+c], dp[i]+1);

        }

    }

    cout << ( dp[x] == INF ? -1 : dp[x] ) << endl;

}

