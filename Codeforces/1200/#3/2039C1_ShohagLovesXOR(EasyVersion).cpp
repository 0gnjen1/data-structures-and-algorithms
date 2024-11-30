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

		int64_t x, m; cin >> x >> m;
		int cnt = 0;
		for(int64_t y=1; y<min(m+1,(2*x+100)); y++){
			if(y==x) continue;
			int64_t eksor = y^x;
			if(!(y%eksor) || !(x%eksor)) cnt++;
		}
		cout << cnt << '\n';
	
	}

}

