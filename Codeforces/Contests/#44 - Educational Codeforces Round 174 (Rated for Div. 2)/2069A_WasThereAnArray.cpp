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
		int m = n-2;
		vector<int> b(m);
		for(auto& val : b) cin >> val;
		bool ok = true;
		for(int i=1; i<(m-1); i++) if(b[i]==0 && b[i-1]==1 && b[i+1]==1) ok = false;
		cout << (ok ? "YES\n" : "NO\n");		

	}

}

