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

struct range {
	
	int l, r, index;

	bool operator < (const range& other) const {
		if(r == other.r) return l > other.l;
		return r < other.r;
	}

};

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n; cin >> n;
	vector<range> ranges (n);
	for(int i=0; i<n; i++){
		cin >> ranges[i].l >> ranges[i].r;
		ranges[i].index = i;
	}
	sort(ranges.begin(), ranges.end());

	ordered_set<pair<int, int>> points;
	
	vector<int> contains (n);
	for(int i=0; i<n; i++){
		contains[ranges[i].index] = points.size() - points.order_of_key(make_pair(ranges[i].l-1, i));
		points.insert(make_pair(ranges[i].l, i));
	}
	
	points.clear();

	vector<int> contained (n);
	for(int i=0; i<n; i++){
		contained[ranges[n-i-1].index] = points.order_of_key(make_pair(ranges[n-i-1].l, i));
		points.insert(make_pair(ranges[n-i-1].l, i));
	}

	for(int i=0; i<n; i++) cout << contains[i] << ' ';
	cout << '\n';
	for(int i=0; i<n; i++) cout << contained[i] << ' ';
	cout << '\n';

}

