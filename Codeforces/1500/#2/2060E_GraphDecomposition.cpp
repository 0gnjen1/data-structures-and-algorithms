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

void unionize(const vector<int> (&graph)[], vector<int>& unions, const int& node, const int& uni){
	if(unions[node] != -1) return;
	unions[node] = uni;
	for(const int& neighbor : graph[node]){
		if(neighbor == -1) continue;
		unionize(graph, unions, neighbor, uni);
	}
	return;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n, m1, m2; cin >> n >> m1 >> m2;

		vector<int> f[n];
		for(int i=0; i<m1; i++){
			int a, b; cin >> a >> b; a--; b--;
			f[a].push_back(b); f[b].push_back(a);
		}

		vector<int> g[n];
		for(int i=0; i<m2; i++){
			int a, b; cin >> a >> b; a--; b--;
			g[a].push_back(b); g[b].push_back(a);
		}

		vector<int> ug (n, -1);
		int u1 = 0;
		for(int i=0; i<n; i++){
			if(ug[i] != -1) continue;
			unionize(g, ug, i, u1);
			u1++;
		}

		int cnt = 0;
		for(int a=0; a<n; a++){
			for(int& b : f[a]){
				if(ug[a] != ug[b]){
					b = -1;
					cnt++;
				}
			}
		}
		if(cnt != 0) cnt /= 2;

		vector<int> uf (n, -1);
		int u2 = 0;
		for(int i=0; i<n; i++){
			if(uf[i] != -1) continue;
			unionize(f, uf, i, u2);
			u2++;
		}

		cout << cnt+u2-u1 << '\n';

	}

}

