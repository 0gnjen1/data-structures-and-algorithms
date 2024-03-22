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

	const int64_t MOD = 1e9+7;

	int t; cin >> t;
	while(t--){

		int n, k; cin >> n >> k;
		vector<int64_t> numbers (n);
		for(auto& num : numbers) cin >> num;

		int64_t total_sum = 0;
		int64_t best_sum = 0;
		int64_t current_sum = 0;		
		for (int i=0; i<n; i++) {
			
			total_sum += numbers[i];
			total_sum %= MOD;
        		
			current_sum += numbers[i];
        		best_sum = max(best_sum, current_sum);
			
			if(current_sum < 0) current_sum = 0;
		
		}
		
		int64_t ans = total_sum;
		
		for(int i=1; i<=k; i++){
	
			ans += best_sum;
			ans %= MOD;
			best_sum *= 2;
			best_sum %= MOD;
	
		}

		cout << (ans+MOD)%MOD << '\n';
	
	}

}

