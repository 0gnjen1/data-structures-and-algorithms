#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		vector<vector<int>> best (3, vector<int>(3));
		vector<pair<int, int>> a (n);
		vector<pair<int, int>> b (n);
		vector<pair<int, int>> c (n);
		for(int i=0; i<n; i++){
			int x; cin >> x;
			a[i] = make_pair(x, i);
		}
		for(int i=0; i<n; i++){
			int x; cin >> x;
			b[i] = make_pair(x, i);
		}
		for(int i=0; i<n; i++){
			int x; cin >> x;
			c[i] = make_pair(x, i);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		sort(c.begin(), c.end());
		int ans = 0;
		for(int i=(n-1); i>(n-4); i--){
			for(int j=(n-1); j>(n-4); j--){
				for(int k=(n-1); k>(n-4); k--){
					if( (a[i].second != b[j].second) && (a[i].second != c[k].second) && (b[j].second != c[k].second) ) ans = max(ans, a[i].first+b[j].first+c[k].first);
				}
			}
		}
		cout << ans << '\n';
	}

}


