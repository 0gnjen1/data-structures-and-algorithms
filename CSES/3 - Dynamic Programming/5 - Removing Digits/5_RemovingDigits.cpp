#include <bits/stdc++.h>

using namespace std;

const int INF = 1e7;

int main(){

    int n; cin >> n;
    int dp[n+1];
    for(int i=0; i<(n+1); i++) dp[i] = INF;
    for(int i=0; i<min(10, n+1); i++) dp[i] = 1;

    for(int i=10; i<(n+1); i++){

        int mini = INF;
        int number = i;
        while(number){
            mini = min(mini, dp[i-(number%10)]);
            number /= 10;
        }

        dp[i] = (mini+1);

    }

    cout << dp[n] << endl;

}
