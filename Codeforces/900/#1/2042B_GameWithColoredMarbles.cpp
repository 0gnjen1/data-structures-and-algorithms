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

		int n; cin >> n;
		vector<int> cnt (n+1, 0);
		for(int i=0; i<n; i++){
			int color; cin >> color;
			cnt[color]++;
		}
		int ones = 0;
		int ans = 0;
		for(int i=1; i<=n; i++){
			if(cnt[i]>1) ans++;
			if(cnt[i]==1) ones++;
		}
		cout << ans+(ones/2)*2+(ones%2)*2 << '\n';

	}

}

