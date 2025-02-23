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

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		string s[2];	// s[01][index]
		for(auto& row : s) cin >> row;
		int ans = 1;
		for(int i=0; i<(n-1); i++){
			if(s[0][i]=='.' &&  s[1][i]=='.' &&  s[0][i+1]=='.' &&  s[1][i+1]=='.'){
				s[0][i] = '#';
				s[1][i] = '#';
				s[0][i+1] = '#';
				s[1][i+1] = '#';
				ans = 2;
				continue;
			}
			if(s[0][i]=='.' && s[1][i]=='.'){
				s[0][i] = '#';
				s[1][i] = '#';
				continue;
			}
			if(s[0][i]=='.' && s[0][i+1]=='.'){
				s[0][i] = '#';
				s[0][i+1] = '#';
				continue;
			}
			if(s[1][i]=='.' && s[1][i+1]=='.'){
				s[1][i] = '#';
				s[1][i+1] = '#';
				continue;
			}
		}
		if(s[0][n-1]=='.' && s[1][n-1]=='.'){
			s[0][n-1] = '#';
			s[1][n-1] = '#';
		}
		for(int i=0; i<n; i++) if(s[0][i]=='.' || s[1][i]=='.') ans = -1;
		if(ans==-1) cout << "None\n";
		if(ans==1) cout << "Unique\n";
		if(ans==2) cout << "Multiple\n";

	}

}

