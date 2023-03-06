#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, d; cin >> n >> d;
    string str; cin >> str;

    int lilipads[n+1];
    for(int i=1; i<(n+1); i++) lilipads[i] = (str[i-1] == '1' ? 1 : 0 );

    int dp[n+1];
    for(int i=0; i<(n+1); i++) dp[i] = n+1;
    dp[1] = 0;

    for(int i=1; i<(n+1); i++){

        for(int j=1; j<=d; j++){

            if( (i+j) > n ) break;

            if(lilipads[i+j]) dp[i+j] = min(dp[i+j], dp[i]+1);

        }

    }

    cout << ( dp[n] == (n+1) ? -1 : dp[n] ) << endl;

}
