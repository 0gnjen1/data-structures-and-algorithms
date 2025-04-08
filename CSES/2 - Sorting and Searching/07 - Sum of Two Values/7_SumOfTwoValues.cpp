#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n, x; cin >> n >> x;
	bool possible = false;
	vector<pair<int, int>> numbers (n);
	numbers.push_back(make_pair(-2100000000, 0));
	numbers.push_back(make_pair(2100000000, 0));
	for(int i=0; i<n; i++){
		int num; cin >> num;
		numbers[i] = make_pair(num, i+1);
	}
	sort(numbers.begin(), numbers.end());
	for(int i=1; i<=n; i++){
		int i2 = lower_bound(numbers.begin(), numbers.end(), make_pair(x-numbers[i].first, 0)) - numbers.begin();
		if( (i != i2) && ((numbers[i].first+numbers[i2].first) == x) ){
			possible = true;
			cout << numbers[i].second << ' ' << numbers[i2].second;
			break;
		}
	}
	if(!possible) cout << "IMPOSSIBLE\n";

}


