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
//	.find_by_order(k)	returns an iterator to the kth smallest element (counting from 0) in O(logN)
//	.order_of_key(k)	returns the number of items that are strictly smaller than k in O(logN)

#pragma GCC target("avx,avx2,fma")

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n, k; cin >> n >> k;
		vector<pair<int, int>> prices(n*2); // (price, type)
		for(int i=0; i<2*n; i++){
			int price; cin >> price;
			prices[i].first = price;
			if(i<n) prices[i].second = 0;
			else prices[i].second = 1;
		}
		sort(prices.begin(), prices.end());
		vector<pair<int, pair<int, int>>> sweep; // (price, (a_cnt, b_cnt))
		sweep.push_back(make_pair(prices[0].first, make_pair(0, 0)));
		int index = 0;
		for(int i=0; i<2*n; i++){
			if(prices[i].first != sweep[index].first){
				sweep.push_back(make_pair(prices[i].first, make_pair(0, 0)));	
				index++;
			}
			if(prices[i].second) sweep[index].second.second++;
			else sweep[index].second.first++;
		}
	
		int64_t ans = 0;
		int before = n;
		int during = 0;
		int after = 0;
		for(int i=0; i<sweep.size(); i++){
			int price = sweep[i].first;
			if(during<=k) ans = max(ans, (int64_t)(before+during)*(int64_t)price);
			after += sweep[i].second.second;
			before -= sweep[i].second.first;
			during = n-after-before;
		}
		cout << ans << '\n';
		
	}

}

