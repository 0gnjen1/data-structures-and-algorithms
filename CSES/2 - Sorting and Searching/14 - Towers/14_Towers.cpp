#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n; cin >> n;
	vector<int> piles (1, -1);
	for(int i=0; i<n; i++){
		int cube; cin >> cube;
		int index = upper_bound(piles.begin(), piles.end(), cube) - piles.begin();
		if( index == piles.size() ) piles.push_back(cube);
		else piles[index] = cube; 
	}
	cout << piles.size()-1;

}

