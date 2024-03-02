#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		int count = 0;
		for(int i=0; i<n; i++){
			int sign; cin >> sign;
			if(i==0) count = sign;
			else{
				count += sign-(count%sign);
			}
		}
		cout << count << '\n';
	
	}

}


