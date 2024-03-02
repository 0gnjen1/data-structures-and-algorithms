#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n, m; cin >> n >> m;
		vector<int> numbers (n);
		for(auto& num : numbers) cin >> num;
		string s; cin >> s;		
		vector<int> new_order (n);
		for(int i=0, l=0, r=(n-1); i<n; i++){
			if(s[i] == 'L'){
				new_order[n-1-i] = numbers[l];
				l++;
			}
			else{
				new_order[n-1-i] = numbers[r];
				r--;
			}
		}
		vector<int> ans (n);
		for(int i=0, tmp = 1; i<n; i++){
			tmp *= new_order[i];
			tmp %= m;
			ans[n-1-i] = tmp;
		}
		for(const auto& a : ans) cout << a << ' ';
		cout << '\n';

	}

}


