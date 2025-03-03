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
		vector<int64_t> a(n);
		for(auto& val : a) cin >> val;
		vector<int64_t> pref_pos(n+2, 0);
		for(int i=1; i<=n; i++) pref_pos[i] = pref_pos[i-1] + (a[i-1]>0 ? a[i-1] : 0);
		vector<int64_t> suff_neg(n+2, 0);
		for(int i=n; i>0; i--) suff_neg[i] = suff_neg[i+1] + (a[i-1]<0 ? -a[i-1] : 0);
		int64_t ans = -1;
		for(int i=0; i<=n; i++) ans = max(ans, pref_pos[i]+suff_neg[i]);
		cout << ans << '\n';
	
	}

}

