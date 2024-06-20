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
		string s; cin >> s;
		int cnt = 0;
		bool close = false;
		for(int i=0; i<(n-1); i++){
			if(s[i] == '1') cnt++;
			if(s[i] == '1' && s[i+1] == '1') close = true;
		}
		if(s[n-1] == '1') cnt++;

		bool possible = true;
		if(cnt&1) possible = false;
		if(cnt==2 && close) possible = false;

		cout << (possible ? "YES" : "NO" ) << '\n';
	
	}

}

