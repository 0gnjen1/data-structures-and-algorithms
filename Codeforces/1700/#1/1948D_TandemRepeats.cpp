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

		string s; cin >> s;

		if(s.length()==1){
			cout << "0\n";
			continue;
		}

		vector<vector<int>> possible ( s.length(), vector<int> ( s.length()/2+2, -1 ) );

		for(int i=0; i<s.length(); i++){
			for(int j=1; j<(s.length()/2+2); j++){
				if(i+j>=s.length()) break;
				if(s[i]=='?' || s[i+j]=='?' || s[i]==s[i+j]) possible[i][j] = 1;
			}
		}

		int ans = 0;
		
		for(int i=1; i<(s.length()/2+2); i++){
			int best = 0;
			int current = 0;
			for(int j=0; j<s.length(); j++){
				if(possible[j][i] == 1) current++;
				else current = 0;
				best = max(best, current);
			}
			if(best>=i) ans = max(ans, i*2);
		}

		cout << ans << '\n';

	}

}

