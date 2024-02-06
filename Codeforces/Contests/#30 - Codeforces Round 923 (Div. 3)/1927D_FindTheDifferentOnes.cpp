#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		vector<int> numbers (n);
		for(int i=0; i<n; i++){
			int num; cin >> num;
			numbers[i] = num;
		}

		vector<int> diffs;
		for(int i=1; i<n; i++){
			if(numbers[i] != numbers[i-1]) diffs.push_back(i-1);
		}		
		int q; cin >> q;
		for(int i=0; i<q; i++){
					
			int l, r; cin >> l >> r;	
			l--;
			r--;
			if(l==r || diffs.size()==0){
				cout << "-1 -1\n";
				continue;
			}
		
			int diff = lower_bound(diffs.begin(), diffs.end(), l) - diffs.begin();
			
			if(diff == diffs.size()){
				cout << "-1 -1\n";
				continue;
			}
			
			if(diffs[diff] < l){
				cout << "-1 -1\n";
				continue;
			}

			if(diffs[diff] < r){
				cout << diffs[diff]+1 << ' ' << diffs[diff]+2 << '\n';
				continue;
			}
			cout << "-1 -1\n";

		}

	}

}


