/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int64_t x, y, z, k;
		cin >> x >> y >> z >> k;
		int64_t ans = 0;
		for(int64_t i=1; i<=x; i++){
			for(int64_t j=1; j<=y; j++){
				if(k%(i*j)) continue;
				int64_t l = k/(i*j);
				if(l>z) continue;
				ans = max(ans, (x-i+1)*(y-j+1)*(z-l+1));
			}
		}
		cout << ans << '\n';

	}

}

