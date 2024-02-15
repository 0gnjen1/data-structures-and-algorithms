#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n, k; cin >> n >> k;
		if(k == 4*n-2) cout << 2*n << '\n';
		else cout << (k/2)+(k&1) << '\n';
	
	}

}


