#include <iostream>

using namespace std;

const int MOD = 1e9+7;

int main(){

    int n; cin >> n;
    int dp[n+1][4] = {0};
    dp[0][3] = 1;

    for(int time=1; time<(n+1); time++){

        for(int vertex=0; vertex<4; vertex++){

            dp[time][vertex] += dp[time-1][(vertex+1)%4];
            dp[time][vertex] %= MOD;
            dp[time][vertex] += dp[time-1][(vertex+2)%4];
            dp[time][vertex] %= MOD;
            dp[time][vertex] += dp[time-1][(vertex+3)%4];
            dp[time][vertex] %= MOD;

        }

    }

    cout << dp[n][3];

}
