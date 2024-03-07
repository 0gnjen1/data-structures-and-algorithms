#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int a, b; cin >> a >> b;
		vector<int> aa (a);
		for(auto& x : aa) cin >> x;
		vector<int> bb (b);
		for(auto& x : bb) cin >> x;
		sort(bb.begin(), bb.end());
		vector<int> ans;
		int ptrb = b-1;
		int ptra = 0;
		while(ptra<a){
			while(bb[ptrb]>=aa[ptra] && ptrb>=0){
				ans.push_back(bb[ptrb]);
				ptrb--;
			}
			ans.push_back(aa[ptra]);
			ptra++;
		}
		while(ptrb>=0){
			ans.push_back(bb[ptrb]);
			ptrb--;
		}
		for(const auto& an : ans) cout << an << ' ';
		cout << '\n';

	}

}

