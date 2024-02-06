#include <bits/stdc++.h>

using namespace std;

int main(){

	int t; cin >> t;
	while(t--){

		int n, k; cin >> n >> k; 
		for(int i=0; i<n; i++){
			for(int j=97; j<97+k; j++) cout << (char)j;
		}
		cout << '\n';

	}

}


