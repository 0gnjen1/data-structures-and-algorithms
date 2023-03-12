#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9+7;

int main(){

    int n; cin >> n;

    vector<vector<int>> grid (n, vector<int>(n));
    for(int i=0; i<n; i++){
        string row; cin >> row;
        for(int j=0; j<n; j++){
            if(row[j] == '*') grid[i][j] = 1;
        }
    }

    vector<vector<int>> dp (n, vector<int>(n));
    dp[0][0] = (grid[0][0] ? 0 : 1);

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            if(grid[i][j]) continue;

            if(j <= (n-2) && grid[i][j+1] != 1){
                dp[i][j+1] += dp[i][j];
                dp[i][j+1] %= MOD;
            }

            if(i <= (n-2) && grid[i+1][j] != 1){
                dp[i+1][j] += dp[i][j];
                dp[i+1][j] %= MOD;
            }

        }

    }

    cout << dp[n-1][n-1] << endl;

}
