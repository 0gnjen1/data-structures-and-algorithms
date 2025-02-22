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

		int n, m; cin >> n >> m;
		int ans = -1;
		vector<vector<int>> a(n, vector<int>(m));
		vector<int> cnt((n*m)+1, 0);
		vector<int> borders_same((n*m)+1, 0);
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				int color; cin >> color;
				a[i][j] = color;
				cnt[color] += 1;
				if(i>0 && a[i-1][j]==color){
					borders_same[color] = 1;
					ans = -2;
				}
				if(j>0 && a[i][j-1]==color){
					borders_same[color] = 1;
					ans = -2;
				}
			}
		}
		for(int i=1; i<=(n*m); i++){
			if(cnt[i]) ans += 1;
			if(borders_same[i]) ans += 1;
		}

		cout << ans << '\n';

	}

}

