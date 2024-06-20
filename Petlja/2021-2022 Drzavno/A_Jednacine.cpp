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

int64_t digitsum(int64_t number){
	int64_t answer = 0;
	while(number){
		answer += (number%10);
		number /= 10;
	}
	return answer;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int64_t x, y, a, b;
	cin >> x >> y >> a >> b;

	int64_t ans = -1;
	for(int64_t i=1; i<=162; i++){
		int64_t possibility = a*i+b;
		if( possibility > 1e18) break;
		if( digitsum(possibility)==i && possibility>=x && possibility<=y ) ans = possibility;
		if(ans != -1) break;
	}

	cout << ans;

}

