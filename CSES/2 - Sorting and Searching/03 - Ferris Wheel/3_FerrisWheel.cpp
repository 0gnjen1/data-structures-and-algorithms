#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x; cin >> n >> x;

	vector<int> weights (n);
	for(auto& w : weights) cin >> w;
	sort(weights.begin(), weights.end());

	int ans = 0;
	int l = 0;
	int r = n-1;
	while(l<=r){
		ans++;
		if( (weights[l]+weights[r]) <= x){
			l++;
			r--;
		}else{
			r--;
		}
	}
	cout << ans;
}
