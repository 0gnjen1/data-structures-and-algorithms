#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n, m; cin >> n >> m;

        vector<vector<int>> grid (n, vector<int>(m));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> grid[i][j];
            }
        }

        if((n+m)%2 == 0){
            cout << "NO" << endl;
            continue;
        }

        vector<vector<pair<int, int>>> dp (n, vector<pair<int, int>>(m, make_pair(1e7, -1e7)));

        dp[0][0].first = grid[0][0];
        dp[0][0].second = grid[0][0];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){

                if(i>0){
                    dp[i][j].first = min(dp[i][j].first, dp[i-1][j].first + grid[i][j]);
                    dp[i][j].second = max(dp[i][j].second, dp[i-1][j].second + grid[i][j]);
                }
                if(j>0){
                    dp[i][j].first = min(dp[i][j].first, dp[i][j-1].first + grid[i][j]);
                    dp[i][j].second = max(dp[i][j].second, dp[i][j-1].second + grid[i][j]);
                }
            }
        }

        cout << (dp[n-1][m-1].first <= 0 && dp[n-1][m-1].second >= 0 ? "YES" : "NO") << endl;

    }

}
