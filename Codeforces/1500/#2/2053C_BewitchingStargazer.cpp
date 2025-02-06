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

pair<int64_t, int64_t> sum(const int64_t n, const int64_t k){
	if(k==1) return make_pair((n*(n+1))/2, 0);
	if(n<k) return make_pair(0, 0);
	pair<int64_t, int64_t> ans = sum(n/2, k);
	if(n%2==0) return make_pair(ans.first*2+ans.second*(n/2), ans.second*2);
	else if(n%2==1) return make_pair(ans.first*2+(ans.second+1)*((n/2)+1), 1+ans.second*2);
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int64_t n, k; cin >> n >> k;
		cout << sum(n, k).first << '\n';
	
	}

}

