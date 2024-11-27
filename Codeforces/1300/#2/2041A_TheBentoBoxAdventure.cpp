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

	vector<int> a(4);
	for(auto& b : a) cin >> b;
	vector<bool> x (5, true);
	for(const auto& b : a) x[b-1] = false;
	for(int i=0; i<5; i++) if(x[i]) cout << i+1 << '\n';
	

}

