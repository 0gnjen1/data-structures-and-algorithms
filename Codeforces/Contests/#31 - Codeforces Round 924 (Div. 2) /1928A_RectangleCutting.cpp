#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int a, b; cin >> a >> b;
		if(b>a) swap(a, b);
		bool possible = true;
		if(a%2 && b%2){
			possible = false;
		}
		if( (a==2*b) && ((a%2==1 && b%2==0) || (a%2==0 && b%2==1)) ) possible = false;
		if(possible){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}

	}

}

