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
//	.find_by_order(k)	returns an iterator to the kth smallest element (counting from 0) in O(logN)
//	.order_of_key(k)	returns the number of items that are strictly smaller than k in O(logN)

#pragma GCC target("avx,avx2,fma")

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n; cin >> n;
	vector<pair<int, int>> vals(n);
	for(int i=0; i<n; i++){
		int val; cin >> val;
		vals[i] = make_pair(val, i);
	}
	sort(vals.begin(), vals.end());
	set<int> s;
	vector<int> ans(n);
	queue<int> todo;
	for(int i=0; i<n; i++){
		set<int>::iterator it = s.upper_bound(vals[i].second);
		if(it==s.begin()) ans[vals[i].second] = 0;
		else{
			it--;
			ans[vals[i].second] = (*it)+1;
		}
		todo.push(vals[i].second);
		if((i+1)<n && vals[i].first!=vals[i+1].first){
			while(!todo.empty()){
				s.insert(todo.front());
				todo.pop();
			}
		}
	}
	for(const auto& a : ans) cout << a << ' ';
	cout << '\n';

}

