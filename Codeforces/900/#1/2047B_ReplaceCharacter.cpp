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

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		string s; cin >> s;
		vector<int> cnt (26, 0);
		for(const auto& c : s) cnt[c-'a']++;
		int mx = -1;
		int mx_char = -1;
		int mn = 1e9;
		int mn_char = -1;
		for(int i=0; i<26; i++){
			if(!cnt[i]) continue;
			if(cnt[i] >= mx){
				mx = cnt[i];
				mx_char = i;
				if(mn_char!=-1) continue;
			}
			if(cnt[i] <= mn){
				mn = cnt[i];
				mn_char = i;
			}
		}
		for(int i=0; i<n; i++){
			if((s[i]-'a')==mn_char){
				s[i] = (char)(mx_char+'a');
				break;
			}
		}
		cout << s << '\n';

	}

}

