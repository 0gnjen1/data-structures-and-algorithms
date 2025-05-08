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
 
// #pragma GCC target("avx,avx2,fma")
 
int main(){
 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
 
	int t; cin >> t;
	while(t--){
 
		bool back = true;
		int64_t cnt = 0;
		int64_t sum = 0;
		int64_t ans = 0;
		int64_t rev_ans = 0;
		deque<int64_t> vals;

 		int q; cin >> q;
		while(q--){

			int op; cin >> op;
			if(op==1){
				if(back){
					int64_t el = vals.back();
					vals.pop_back();
					ans += sum-cnt*el;
					rev_ans += cnt*el-sum;
					vals.push_front(el);
				} else {
					int64_t el = vals.front();
					vals.pop_front();
					ans += sum-cnt*el;
					rev_ans += cnt*el-sum;
					vals.push_back(el);
				}
			} else if (op==2){
				back ^= 1;
				swap(ans, rev_ans);
			} else {
				int val; cin >> val;
				cnt++;
				if(back){
					vals.push_back(val);
				} else {
					vals.push_front(val);
				} 
				ans += cnt*val;
				rev_ans += sum+val;
				sum += val;
			}
			cout << ans << '\n';
		
		}

	}
 
}


