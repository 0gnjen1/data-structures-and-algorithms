#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n, m, k; cin >> n >> m >> k;	
		vector<int> a;
		vector<int> b;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			if(x>k) continue;
			a.push_back(x);
		}
		for(int i=0; i<m; i++){
			int x; cin >> x;
			if(x>k) continue;
			b.push_back(x);
		}
		if(a.size() < (k/2) || b.size() < (k/2)){
			cout << "NO\n";
			continue;
		}
		vector<vector<int>> x (2, vector<int>(k));
		for(int i=0; i<a.size(); i++) x[0][a[i]-1] = 1;
		for(int i=0; i<b.size(); i++) x[1][b[i]-1] = 1;
		bool impossible = false;
		int aunique = 0;
		int bunique = 0;
		for(int i=0; i<k; i++){
			if(!x[0][i] && !x[1][i]){
				impossible = true;
				break;
			}
			if(x[0][i] && !x[1][i]) aunique++;
			if(x[1][i] && !x[0][i]) bunique++;
		}
		if(impossible || aunique > (k/2) || bunique > (k/2)){
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
	}

}

