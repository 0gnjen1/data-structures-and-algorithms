/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

bool possible(const string& original, const int length){
	int cnt1 = 0;
	for(int i=0; i<original.size(); i++){
		if( original[i%length] != original[i] ) cnt1++;
		if(cnt1>1) break;
	}
	int cnt2 = 0;
	for(int i=0; i<original.size(); i++){
		if( original[i%length+length] != original[i] ) cnt2++;
		if(cnt2>1) break;
	}
	if(cnt1<2 || cnt2<2) return true;
	return false;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		string s; cin >> s;
		int ans = n;
		for(int i=1; i<=(n/2); i++){
			if(n%i==0){
				if(possible(s, i)) ans = i;
			}
			if(ans!=n) break;
		}
		cout << ans << '\n';	

	}

}

