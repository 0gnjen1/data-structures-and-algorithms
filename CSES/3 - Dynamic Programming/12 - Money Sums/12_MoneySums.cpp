#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	vector<int> sum (1e5+1, 0);
	sum[0] = 1;

	int n; cin >> n;
	vector<int> coins (n);
	for(auto& coin : coins){
		cin >> coin;
		for(int i=1e5; i>0; i--){
			if( (i-coin) < 0 ) break;
			if(sum[i-coin]) sum[i] = 1;
		}
	}
	
	int k = 0;
	for(int i=1; i<=1e5; i++) if(sum[i]) k++;
	cout << k << '\n';
	for(int i=1; i<=1e5; i++){
		if(sum[i] == 0) continue;
		cout << i << ' ';
	}

}

