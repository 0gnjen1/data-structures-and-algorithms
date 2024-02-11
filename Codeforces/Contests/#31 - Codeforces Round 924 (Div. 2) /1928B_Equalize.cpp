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
		numbers.erase( unique( numbers.begin(), numbers.end() ), numbers.end() );
		int l = 0;
		int r = 0;
		int ans = 1;
		while(r!=numbers.size()){
			if(numbers[r]-numbers[l] < n){
				ans = max(ans, r-l+1);
				r++;
			}
			else l++;
		}
		cout << ans << '\n';
	
	}

}

