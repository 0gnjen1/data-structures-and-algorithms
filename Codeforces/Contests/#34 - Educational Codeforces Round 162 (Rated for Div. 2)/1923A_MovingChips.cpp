#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		vector<int> cells (n);
		for(auto& cell : cells) cin >> cell;
		int cnt = 0;
		for(int i=0; i<n; i++) if(cells[i] == 1) cnt++;
		int l = 0;
		while(cells[l] != 1) l++;
		int r = (n-1);
		while(cells[r] != 1) r--;
		cout << r-l-cnt+1 << '\n';
	
	}

}


