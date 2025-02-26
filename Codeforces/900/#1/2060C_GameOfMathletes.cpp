/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx,avx2,fma")

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//	.find_by_order(k)	returns an iterator to the kth smallest element (counting from 0) in O(logN)
//	.order_of_key(k)	returns the number of items that are strictly smaller than k in O(logN)

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n, k; cin >> n >> k;
		vector<int> cnt (n+1, 0);
		for(int i=0; i<n; i++){
			int val; cin >> val;
			cnt[val]++;
		}
		if(k==1){
			cout << "0\n";
			continue;
		}
		int count = 0;
		for(int i=1; i<=n; i++){
			if(k-i>n || k-i<1) continue;
			count += min(cnt[i], cnt[k-i]);
		}
		cout << count/2 << '\n';
	}

}

