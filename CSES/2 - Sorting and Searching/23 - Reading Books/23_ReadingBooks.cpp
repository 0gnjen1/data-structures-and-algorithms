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

	int n; cin >> n;
	int64_t sum = 0;
	int64_t maxi = -1;
	for(int i=0; i<n; i++){
		int64_t val; cin >> val;
		sum += val;
		maxi = max(maxi, val);
	}
	cout << max(sum, maxi*2) << '\n';

}

