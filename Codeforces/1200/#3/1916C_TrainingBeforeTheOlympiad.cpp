#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		vector<int> odds (n+1);
		vector<int64_t>	pref (n+1);
		for(int i=1; i<=n; i++){
			int num; cin >> num;
			pref[i] = pref[i-1] + (int64_t)num;
			odds[i] = odds[i-1] + (num&1 ? 1 : 0);
		}
		cout << pref[1] << ' ';
		for(int k=2; k<=n; k++){
			cout << pref[k] - (int64_t)((odds[k]/3)+((odds[k]%3)==1 ? 1 : 0)) << ' ';
		}
		cout << '\n';
	}

}

