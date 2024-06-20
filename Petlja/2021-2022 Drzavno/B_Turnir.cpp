/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n, m, k; cin >> n >> m >> k;

	vector<int> prizes (n);
	for(int& prize : prizes) cin >> prize;

	vector<vector<int>> bets (n, vector<int>(m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++) cin >> bets[i][j];
		sort(bets[i].begin(), bets[i].end());
	}

	vector<vector<int64_t>> dp (n+1, vector<int64_t> (k+1));
	for(int i=1; i<=n; i++){
		for(int j=0; j<=k; j++){
			dp[i][j] = max(dp[i][j], dp[i-1][j]);
			for(int l=0; l<m; l++){
				int bet = bets[i-1][l]+1;
				if( bet > j ) break;
				dp[i][j] = max(dp[i][j], (int64_t)(l+1)*(int64_t)prizes[i-1] + dp[i-1][j-bet]);
			}
		}
	}

	cout << dp[n][k] << '\n';
	
}

