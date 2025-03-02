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

		int n, l, r; cin >> n >> l >> r;
		vector<int> before;
		vector<int> after;
		for(int i=1; i<=n; i++){
			int val; cin >> val;
			if(i>r) after.push_back(val);
			else if(i>=l){
				after.push_back(val);
				before.push_back(val);	
			}
			else before.push_back(val);
		}
		sort(before.begin(), before.end());	
		sort(after.begin(), after.end());	
		int64_t sum1 = 0, sum2 = 0;
		for(int i=0; i<(r-l+1); i++){
			sum1 += (int64_t)before[i];
			sum2 += (int64_t)after[i];
		}
		cout << min(sum1, sum2) << '\n';

	}

}

