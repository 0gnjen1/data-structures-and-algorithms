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
 
		int n, m; cin >> n >> m;
		vector<int> nums (m);
		for(auto& num : nums) cin >> num;
		sort(nums.rbegin(), nums.rend());
		vector<int> ans;
		set<int> s[n+1];
		for(int i=1; i<=n; i++){
			for(const auto& num : nums){
				if(s[i].find(num) == s[i].end()){
					ans.push_back(num);
					for(int k=2*i; k<=n; k += i){
						s[k].insert(num);
					}
					break;
				}
			}
		}
		if(ans.size() != n){
			cout << "-1\n";
			continue;
		}
		for(const auto& a : ans) cout << a << ' ';
		cout << '\n';
	
	}
 
}
