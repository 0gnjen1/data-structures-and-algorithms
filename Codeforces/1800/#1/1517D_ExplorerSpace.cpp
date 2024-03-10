#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n, m, k; cin >> n >> m >> k;

	vector<vector<vector<int>>> grid (n, vector<vector<int>> (m, vector<int> (4, 1e9)));
	// [n][m][l:0 u:1 r:2 d:3]

	for(int i=0; i<n; i++){
		for(int j=0; j<(m-1); j++){
			int val; cin >> val;
			grid[i][j][2] = val;
			grid[i][j+1][0] = val;
		}
	}
	
	for(int i=0; i<(n-1); i++){
		for(int j=0; j<m; j++){
			int val; cin >> val;
			grid[i][j][3] = val;
			grid[i+1][j][1] = val;
		}
	}
	if(k&1){
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++) cout << "-1 ";
			cout << '\n';
			}
		return 0;
	}

	vector<vector<vector<int>>> dp (n, vector<vector<int>> (m, vector<int> (k/2, 1e9)));
	// [n][m][k]
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			dp[i][j][0] = min( min(grid[i][j][0], grid[i][j][1]),
					   min(grid[i][j][2], grid[i][j][3]));
		}
	}

	for(int ka=1; ka<(k/2); ka++){
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				int mini = 1e9;
				if(i!=0)     mini = min(mini, dp[i-1][j][ka-1]+grid[i][j][1]);
				if(i!=(n-1)) mini = min(mini, dp[i+1][j][ka-1]+grid[i][j][3]);
				if(j!=0)     mini = min(mini, dp[i][j-1][ka-1]+grid[i][j][0]);
				if(j!=(m-1)) mini = min(mini, dp[i][j+1][ka-1]+grid[i][j][2]);
				dp[i][j][ka] = min(dp[i][j][0]*(ka+1), mini);
			}
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout << dp[i][j][k/2-1]*2 << ' ';
		}
 		cout << '\n';
	}
	
}

