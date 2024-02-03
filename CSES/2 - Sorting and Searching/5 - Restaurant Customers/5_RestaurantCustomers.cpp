#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n; cin >> n;
	vector<pair<int, int>> times;	
	for(int i=0; i<n; i++){
		int arrival, leaving; cin >> arrival >> leaving;
		times.push_back(make_pair(arrival, 0));
		times.push_back(make_pair(leaving, 1));
	}
	sort(times.begin(), times.end());
	int count = 0;
	int maxi = 0;
	for(int i=0; i<(2*n); i++){
		if(times[i].second) count--;
		else count++;
		maxi = max(maxi, count);
	}	
	cout << maxi;
}

