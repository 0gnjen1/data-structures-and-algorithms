#include <iostream>

using namespace std;

const int MOD = 1000000007;

int main(){

    int n, x; cin >> n >> x;

    int dp[x+1];
    for(auto& i : dp) i=0;

    int coins[n];
    for(auto& c : coins){
        cin >> c;
        if(c<=x) dp[c] = 1;
    }

    for(int i=1; i<(x+1); i++){

        if( dp[i] == 0 ) continue;

        for(auto& c : coins){

            if( (i+c) > x ) continue;

            dp[i+c] += dp[i];
            dp[i+c] %= MOD;

        }

    }

    cout << dp[x];

}
