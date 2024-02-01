#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		vector<int> a (n);
		for(int i=0; i<n; i++) cin >> a[i];
		vector<int> b (n);
		for(int i=0; i<n; i++) cin >> b[i];

		vector<pair<int, int>> best (n);
		for(int i=0; i<n; i++) best[i] = make_pair(a[i]+b[i], i);
		sort(best.begin(), best.end());

		int64_t score = 0;
		for(int i=1; i<=n; i++){
			int index = best[n-i].second;
			if(i&1){
				score += (a[index] - 1);
				continue;
			}
			score -= (b[index] - 1);
		}	
		cout << score << '\n';
	}

}


