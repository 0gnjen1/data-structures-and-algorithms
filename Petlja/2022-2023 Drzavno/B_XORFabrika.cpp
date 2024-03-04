#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n, q; cin >> n >> q;
	string s; cin >> s;
	vector<int> odd (n+1);
	odd[0] = 1;
	vector<int> even (n+1);
	for(int i=1; i<=n; i++){
		if(s[i-1] == '+'){
			odd[i] = odd[i-1]+1;
			even[i] = even[i-1]+1;
		}else{
			odd[i] = odd[i-1]^1;
			even[i] = even[i-1]^1;
		}
	}
	
	while(q--){
		int l, r, x; cin >> l >> r >> x;
		if( (x&1 && l&1) || (!(x&1)) && !(l&1) ) x += odd[r]-odd[l-1];
		else x += even[r]-even[l-1];
		cout << x << '\n';
	}

}


