#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n; cin >> n;
	vector<int64_t> lengths (n+1);
	for(int i=1; i<=n; i++){
		int64_t len; cin >> len;
		lengths[i] = len;
	}

	sort(lengths.begin(), lengths.end());

	vector<int64_t> pref (n+1);
	for(int i=1; i<=n; i++){
		pref[i] = pref[i-1] + lengths[i];
	}

	int64_t mini = 9e18;
	for(int i=1; i<=n; i++){
		int64_t lcost = lengths[i]*(int64_t)(i-1) - pref[i-1];
		int64_t rcost = pref[n]-pref[i] - lengths[i]*(int64_t)(n-i);
		mini = min(mini, lcost+rcost);
	}

	cout << mini;

}

