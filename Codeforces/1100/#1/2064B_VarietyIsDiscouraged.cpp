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
		vector<int> cnt(n+1, 0);
		vector<int> a(n+1, 0);
		for(int i=1; i<=n; i++){
			int val; cin >> val;
			a[i] = val;
			cnt[val]++;
		}
		for(int i=0; i<=n; i++){
			cnt[i]--;
			cnt[i] = max(cnt[i], 0);
		}
		int best_sum = 0;
		int current = 0;
		int best_l = -1;
		int best_r = -1;
		int l = (cnt[a[0]] ? -1 : 1);
		int r = -1;
		for(int i=1; i<=n; i++){
			if(cnt[a[i]]){
				l = i+1;
				current = 0;
				continue;
			}
			current++;
			r = i;
			if(best_sum<current){
				best_sum = current;
				best_l = l;
				best_r = r;
			}
		}
		if(best_sum){
			cout << best_l << ' ' << best_r << '\n';
			continue;
		}
		cout << "0\n";
	}

}

