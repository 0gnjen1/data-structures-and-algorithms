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

	int n; cin >> n;
	vector<int> c(n);
	for(auto& val : c) cin >> val;
	reverse(c.begin(), c.end());
	vector<int> g(n, 0);
	for(int i=0; i<n; i++) g[i] = i+1;
	vector<pair<int, int>> ops;
	for(const auto& _ : {0,1}){
		for(int i=(n-1); i>=0; i--){
			int ptr = 0;
			while(g[ptr]!=c[i]) ptr++;
			while(ptr<i){
				ops.push_back(make_pair(g[ptr+1], g[ptr]));
				int tmp = g[ptr+1];
				g[ptr+1] = g[ptr];
				g[ptr] = tmp;
				ptr++;
			}
		}
		reverse(c.begin(), c.end());
	}
	cout << ops.size() << '\n';
	for(const auto& op : ops) cout << op.first << ' ' << op.second << '\n';
}

