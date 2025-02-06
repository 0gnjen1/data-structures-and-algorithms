/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int64_t n, m; cin >> n >> m;
		string s; cin >> s;
		s += 'x';
		int64_t grid[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				int x; cin >> x;
				grid[i][j] = x;
			}
		}
		int64_t sum_horizontal[n];
		for(int i=0; i<n; i++){
			int64_t sum = 0;
			for(int j=0; j<m; j++) sum += grid[i][j];
			sum_horizontal[i] = sum;
		}	
		int64_t sum_vertical[m];
		for(int j=0; j<m; j++){
			int64_t sum = 0;
			for(int i=0; i<n; i++) sum += grid[i][j];
			sum_vertical[j] = sum;
		}
		int64_t x = 0;
		int64_t y = 0;
		for(const char& c : s){
			int64_t val = -(c=='D' ? sum_horizontal[x] : sum_vertical[y]);
			grid[x][y] = val;
			sum_horizontal[x] += val;
			sum_vertical[y] += val;
			x += (c=='D');
			y += (c=='R');
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++) cout << grid[i][j] << ' ';
			cout << '\n';
		}

	}

}


