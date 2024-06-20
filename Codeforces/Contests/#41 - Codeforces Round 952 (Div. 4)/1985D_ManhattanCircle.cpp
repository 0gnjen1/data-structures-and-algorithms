/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n, m; cin >> n >> m;
		int longest = -1;
		vector<pair<int, pair<int, int>>> intervals (n);
		for(int i=0; i<n; i++){
			string row; cin >> row;
			bool in_row = false;
			int begins_at = -1;
			int ends_at = -1;
			for(int j=0; j<m; j++){
				if( !in_row && (row[j] == '#') ){
					begins_at = j;
					in_row = true;
					continue;
				}
				if( in_row && (row[j] == '.') ){
					ends_at = j-1;
					in_row = false;
				}
			}
			if( in_row && (ends_at == -1) ) ends_at = m-1;
			intervals[i].first = ends_at-begins_at+1;
			if(ends_at==-1 && begins_at==-1) intervals[i].first = 0;
			longest = max(longest, intervals[i].first);
			intervals[i].second.first = begins_at;
			intervals[i].second.second = ends_at;
		}
		int ans_n = -1;
		int ans_m = -1;
		for(int i=0; i<n; i++){
			if(intervals[i].first == longest){
				ans_n = i+1;
				ans_m = intervals[i].second.first+((intervals[i].second.second-intervals[i].second.first)/2)+1;
				break;
			}
		}
		cout << ans_n << ' ' << ans_m << '\n';
		
	}

}

