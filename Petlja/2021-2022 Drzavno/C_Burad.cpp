/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n, m; cin >> n >> m;

	vector<int> capacity (n);
	for(int& c : capacity) cin >> c;

	vector<pair<int, int>> intervals (m);
	vector<int> water (n+1);
	for(int i=0; i<m; i++){
		int l, r; cin >> l >> r;
		water[l-1]++;
		water[r]--;
		intervals[i] = make_pair(l-1, r-1);
	}
	sort(intervals.begin(), intervals.end());
	for(int i=0; i<n; i++) water[i+1] += water[i];
	
	int answer = 0;
	priority_queue<int> furthest;
	vector<int> ends(n);
	int covered = 0;
	int intr_ptr = 0;
	for(int i=0; i<n; i++){
		while( (intr_ptr < m) && (intervals[intr_ptr].first == i) ){
			furthest.push(intervals[intr_ptr].second);
			intr_ptr++;
		}
		if( water[i]-covered > capacity[i] ){
			int overflow = water[i]-covered-capacity[i];
			for(int j=0; j<overflow; j++){
				ends[furthest.top()]++;
				furthest.pop();
			}
			covered += overflow;
			answer += overflow;
		}
		covered -= ends[i];
	}

	cout << answer << '\n';

}

