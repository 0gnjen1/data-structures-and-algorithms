#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){
		
		int64_t k, x, a; cin >> k >> x >> a;
		int64_t needed = 0;
		int64_t loss = 0;
		for(int64_t i=0, bet = 0; i<=x; i++){
			bet = (needed/(k-1))+1;
			needed += bet;
			if(needed>a) break;
		}
		if(needed>a) cout << "NO\n";
		else cout << "YES\n";

	}

}

