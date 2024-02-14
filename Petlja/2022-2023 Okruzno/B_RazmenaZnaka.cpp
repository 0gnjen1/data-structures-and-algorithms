#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		vector<int> a1 (n);
		map<int, int> poe;
		map<int, int> poo;
		for(int i=0; i<n; i++){
			int a; cin >> a;
			a1[i] = a;
			if(a==0) poe[0]++;
			if( (a>0 &&  !(i&1)) || (a<0 && i&1) ) poe[abs(a)]++;
			else poo[abs(a)]++;
		}
		for(int i=0; i<n; i++){
			int b; cin >> b;
			if(b==0) poe[0]--;
			if( (b>0 && !(i&1)) || (b<0 && i&1) ) poe[abs(b)]--;
			else poo[abs(b)]--;
		}
		bool possible = true;
		for(int i=0; i<n; i++){
			if(poe[abs(a1[i])] || poo[abs(a1[i])]) possible = false;
		}
		if(possible) cout << "DA\n";
		else cout << "NE\n";

	}

}

