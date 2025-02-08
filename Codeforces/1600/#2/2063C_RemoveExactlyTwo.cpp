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

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		vector<int> tree[n];
		vector<int> cnt (n, 0);
		for(int i=0; i<n-1; i++){
			int a, b; cin >> a >> b; a--; b--;
			tree[a].push_back(b); tree[b].push_back(a);
			cnt[a]++; cnt[b]++;
		}
		if(n == 2){
			cout << "0\n";
			continue;
		}
		int maxi = 0;
		for(const int c : cnt) maxi = max(c, maxi);
		vector<int> indexes;
		for(int i=0; i<n; i++){
			if(cnt[i] == maxi && indexes.size()<2) indexes.push_back(i);
		}
		int best = -1;
		for(const int index : indexes){
			int score = 1;
			score += cnt[index]-1;
			int old = cnt[index];
			cnt[index] = 0;
			for(const int neighbor : tree[index]) cnt[neighbor]--;
			int max_cnt = 0;
			for(const int c : cnt) max_cnt = max(c, max_cnt);
			score += max_cnt-1;
			best = max(score, best);
			for(const int neighbor : tree[index]) cnt[neighbor]++;
			cnt[index] = old;
		}
		cout << best << '\n';
		
		
	
	}

}

