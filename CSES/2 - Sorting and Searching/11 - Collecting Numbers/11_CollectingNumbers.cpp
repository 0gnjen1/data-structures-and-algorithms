#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n; cin >> n;
	vector<pair<int, int>> numbers (n, make_pair(0, 0));
	for(int i=0; i<n; i++){
		int number; cin >> number;
		numbers[i].first = number;
		numbers[i].second = i;
	}
	sort(numbers.begin(), numbers.end());
	int rounds = 1;
	for(int i=1; i<n; i++){
		if(numbers[i].second<numbers[i-1].second) rounds++;
	}
	cout << rounds;
}


