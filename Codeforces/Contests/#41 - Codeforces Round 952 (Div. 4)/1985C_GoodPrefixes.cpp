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

		int n; cin >> n;
		vector<int> numbers (n);
		for(auto& num : numbers) cin >> num;
		int ans = (numbers[0] ? 0 : 1);
		int biggest = numbers[0];
		int64_t sum = numbers[0];
		for(int i=1; i<n; i++){
			biggest = max(biggest, numbers[i]);
			sum += numbers[i];
			if( (sum-biggest) == biggest) ans++;
		}
		cout << ans << '\n';
	
	}

}

