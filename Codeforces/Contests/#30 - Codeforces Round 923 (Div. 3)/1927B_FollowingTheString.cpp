#include <bits/stdc++.h>

using namespace std;

int main(){

//	ios_base::sync_with_stdio(false);
	//cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		vector<int> a (n);
		for(auto& x : a) cin >> x;
		vector<int> letters (26);
		for(int i=0; i<n; i++){
			for(int j=0; j<26; j++){
				if(a[i] == letters[j]){
					cout << (char)(j+97);
					letters[j]++;
					break;
				}
			}
		}	
		cout << '\n';
	}

}

