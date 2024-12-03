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
		if(n<5){ cout << "-1\n"; continue; }
		for(int i=1; i<=n; i+=2){ if(i==5) continue; cout << i << ' '; }
		cout << "5 4 ";
		for(int i=2; i<=n; i+=2){ if(i==4) continue; cout << i << ' '; }
		cout << '\n';
		 
	
	}

}

