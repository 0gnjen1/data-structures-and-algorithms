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

		int a, b; cin >> a >> b;
		int x = 0;
		for(int i=30; i>=0; i--){
			if( (a|b)&(1<<i) ) x |= (1<<i);
			if( (a^b)&(1<<i) ) break;
		}
		int y = x-1;
		int z = -1;
		for(int i=a; i<(a+3); i++){
			if(i!=x && i!=y) z = i;
		}
		cout << x << ' ' << y << ' ' << z << '\n';

	}

}

