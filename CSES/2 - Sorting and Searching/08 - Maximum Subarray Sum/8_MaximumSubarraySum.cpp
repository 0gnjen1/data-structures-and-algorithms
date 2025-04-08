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

	int n; cin >> n;
	int64_t max_sum = -1e18;
	int64_t curr_sum = 0;	
	for(int i=0; i<n; i++){
		int64_t number; cin >> number;
		curr_sum += number;
		max_sum = max(max_sum, max(curr_sum, number));
		if(curr_sum-number < 0) curr_sum = number;
		
	}

	cout << max_sum;

}

