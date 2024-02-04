#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<vector<int>> dp (501, vector<int>(501, 1e9+1));

	for(int i=1; i<501; i++) dp[i][1] = i-1;
	for(int j=1; j<501; j++) dp[1][j] = j-1;
	for(int x=2; x<501; x++) dp[x][x] = 0;

	for(int i=1; i<501; i++){
		for(int j=1; j<501; j++){
			if( dp[i][j] != (1e9+1) ) continue;
			int mini = 1e9;
			for(int k=1; k<i; k++){
				mini = min(mini, dp[i-k][j] + dp[k][j]);
			}
			for(int k=1; k<j; k++){
				mini = min(mini, dp[i][j-k] + dp[i][k]);
			}
			dp[i][j] = mini+1;
			dp[j][i] = mini+1;
		}
	}

	int a, b; cin >> a >> b;
	cout << dp[a][b];

}

