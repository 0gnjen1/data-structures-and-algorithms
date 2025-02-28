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

void dfs(const vector<int> (&tree)[], vector<pair<int, int>>& visited, int node, int depth){
	visited[node-1] = make_pair(depth, node);
	for(int child : tree[node]){
		if(visited[child-1].second) continue;
		dfs(tree, visited, child, depth+1);
	}
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n, st, en; cin >> n >> st >> en;
		vector<int> tree[n+1];
		for(int i=1; i<n; i++){
			int a, b; cin >> a >> b; 
			tree[a].push_back(b);
			tree[b].push_back(a);
		}
		vector<pair<int, int>> visited (n, make_pair(-1, 0));	
		dfs(tree, visited, en, 0);
		sort(visited.rbegin(), visited.rend());
		for(const auto& p : visited) cout << p.second << ' ';
		cout << '\n';
	}

}

