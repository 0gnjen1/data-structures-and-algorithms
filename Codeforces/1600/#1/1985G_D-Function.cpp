/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

const int64_t MOD = 1e9+7;

// ((a^b) mod p)
int64_t mod_exp(int64_t a, int64_t b, int64_t p){
	int64_t result = 1;
	for(int i=29; i>=0; i--){
		result *= result;
		result %= p;
		if(b&((int64_t)1<<i)) result *= a;
		result %= p;
	}
	return result;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int64_t l, r, k; cin >> l >> r >> k;
		int64_t answer = (mod_exp((9/k)+1, r, MOD) - mod_exp((9/k)+1, l, MOD));
		answer += MOD;
		answer %= MOD;
		cout << answer << '\n';

	}

}

