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
		vector<int> numbers (n);
		for(auto& num : numbers) cin >> num;
		if(n==1){
			cout << "1\n";
			continue;
		}
		sort(numbers.begin(), numbers.end());
		int median_index = n/2-((n^1)&1);
		int ans = 0;
		while(median_index+ans<n && numbers[median_index]==numbers[median_index+ans]) ans++;
		cout << ans << '\n';
	
	}

}

