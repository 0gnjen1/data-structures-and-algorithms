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

bool is_perfect_square(int64_t n) {
    int64_t root = round(sqrtl(n));
    return n == root * root;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int64_t n; cin >> n;
		if(is_perfect_square(n*(n+1)/2)){
			cout << "-1\n";
			continue;
		}
		int64_t cnt = 0;
		int64_t prev_cnt;
		bool ok = true;
		int64_t sum = 0;
		vector<bool> taken (n+1, false);
		vector<int64_t> perm;
		while(cnt<n){
			prev_cnt = cnt;
			for(int64_t i=1; i<=n; i++){
				if(taken[i]) continue;
				if(is_perfect_square(sum+i)) continue;
				cnt++;
				taken[i] = true;
				perm.push_back(i);
				sum += i;
			}
			if(cnt == prev_cnt){
				cout << "-1\n";
				ok = false;
				break;
			}
		}
		if(!ok) continue;
		for(const auto& val : perm) cout << val << ' ';
		cout << '\n';

	}

}


