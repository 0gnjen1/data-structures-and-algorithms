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
		sort(numbers.begin(), numbers.end());
		int64_t ans = 0;
		for(int i=1; i<n; i++) ans += numbers[i] - numbers[i-1];
		cout << ans << '\n';
	
	}

}


