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
		priority_queue<int> lens;
		for(int i=0; i<n; i++){
			vector<int> a(n);
			for(auto& val : a) cin >> val;
			int len = 0;
			for(int j=n-1; j>=0; j--){
				if(a[j]!=1) break;
				len++;
			}
			lens.push(-len);
		}
		lens.pop();
		int mex = -1;	
		while(lens.size()){
			if(lens.top()<=mex){
				mex--;
				lens.pop();	
			} else lens.pop();
		}
		cout << -mex << '\n';
	}

}

