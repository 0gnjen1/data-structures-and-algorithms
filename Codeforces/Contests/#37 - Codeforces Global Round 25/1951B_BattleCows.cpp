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

		int n, k; cin >> n >> k;
		vector<int> cows (n);
		for(int& cow : cows) cin >> cow;
		
		int mycow = k-1;		

		bool bigger_exists = false;
		for(const auto& cow : cows) if(cow>cows[mycow]) bigger_exists = true;
		int first_bigger = 0;
		if(bigger_exists){
			while(cows[first_bigger] <= cows[mycow]) first_bigger++;
		}
		
		if(!bigger_exists){
			cout << n-1 << '\n';
			continue;
		}
	
		int score1 = 0;
		int i = 1;
		while(mycow+i<n && cows[mycow+i]<cows[mycow]){
			score1++;
			i++;
		}
		if(mycow!=0 && cows[mycow-1]<cows[mycow]) score1++;
		if(mycow>first_bigger) score1 = 0;
		
		int score2 = 0;
		i = 1;
		while(first_bigger+i<n && cows[first_bigger+i]<cows[mycow]){
			score2++;
			i++;
		}
		if(first_bigger!=0 && cows[first_bigger-1]<cows[mycow]) score2++;
		if(mycow<first_bigger) score2 = 0;
		
		int score3 = 0;
		if(bigger_exists) score3 = first_bigger - 1;

		int best = max(score1, max(score2, score3));
		cout << best << '\n';
		
	}

}

