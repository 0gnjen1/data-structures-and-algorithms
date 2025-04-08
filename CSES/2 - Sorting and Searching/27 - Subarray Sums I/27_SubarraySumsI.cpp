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

	int n, x; cin >> n >> x;
	vector<int> vals(n);
	for(auto& val : vals) cin >> val;
	int cnt = vals[0]==x;
	int sum = vals[0];
	int l = 0;
	int r = 0;
	while(l<n && r<n){
		if(sum<=x){
			r++;
			if(r==n) break;
			sum+=vals[r];
		}
		else{
			sum-=vals[l];
			l++;
		}
		if(sum==x){
			cnt++;
		}
	}
	cout << cnt << '\n';

}

