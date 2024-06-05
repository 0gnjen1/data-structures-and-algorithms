#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n, k; cin >> n >> k;
		vector<int> health (n);
		for(auto& hea : health) cin >> hea;
		vector<int> position (n);
		for(auto& pos : position) cin >> pos;

		vector<pair<int, int>> monsters (n);
		for(int i=0; i<n; i++){
			monsters[i] = make_pair(abs(position[i]), health[i]);
		}
		sort(monsters.begin(), monsters.end());

		int64_t current_sum = 0;
		bool possible = true;
		for(int i=0; i<n; i++){
			current_sum += (int64_t)monsters[i].second;
			if( (current_sum/k+(current_sum%k ? 1 : 0)) > monsters[i].first ){
				possible = false;
				break;
			}
		}

		if( possible ) cout << "YES\n";
		else cout << "NO\n";

	}

}

