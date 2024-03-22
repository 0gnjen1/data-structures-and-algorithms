#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x, n; cin >> x >> n;

	set<int> lights;
	lights.insert(0);
	lights.insert(x);

	multiset<int> lengths;
	lengths.insert(x);

	for(int i=0; i<n; i++){
		int light; cin >> light;
		auto it = lights.upper_bound(light);
		int r = *it;
		it--;
		int l = *it;
		lights.insert(light);
		lengths.erase( lengths.lower_bound(r-l) );
		lengths.insert(light-l);
		lengths.insert(r-light);
		auto ans = *lengths.rbegin();
		cout << ans << ' ';
	}

}

