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

		int64_t n, m, k; cin >> n >> m >> k;
		vector<int64_t> prices (n);
		for(auto& price : prices) cin >> price;
		sort(prices.begin(), prices.end());
		int64_t cnt = 0;
		int64_t ans = 0;
		for(const auto& price : prices){
			int64_t to_buy = min(m, k-cnt);
			ans += (price+cnt)*to_buy;
			cnt += to_buy;
		}
		cout << ans << '\n';

	}

}

