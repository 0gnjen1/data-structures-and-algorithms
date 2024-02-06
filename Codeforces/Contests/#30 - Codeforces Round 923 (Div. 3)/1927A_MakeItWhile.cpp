#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		string s; cin >> s;
		int cnt = 0;
		for(int i=0; i<n; i++){
			if(s[i] == 'W') cnt++;
			else break;
		}
		if(cnt == n){
			cout << 0 << '\n';
			continue;
		}
		for(int i=(n-1); i>=0; i--){
			if(s[i] == 'W') cnt++;
			else break;
		}
		cout << n-cnt << '\n';
	}

}

