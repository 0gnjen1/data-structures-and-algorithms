/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

bool damage(int64_t time, int64_t health, const vector<int64_t>& attacks, const vector<int64_t>& cooldowns){
	int64_t total_damage = 0;
	for(int i=0; i<attacks.size(); i++){
		total_damage += attacks[i]*(((time-1)/cooldowns[i])+1);
		if(total_damage >= health) break;
	}
	return total_damage >= health;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int64_t h, n; cin >> h >> n;
		vector<int64_t> attack (n);
		for(auto& a : attack) cin >> a;
		vector<int64_t> cooldown (n);
		for(auto& c : cooldown) cin >> c;
		
		int64_t lo = 1;
		int64_t hi = 1e12;
		while(lo<hi){
			int64_t mid = (lo+hi)/2;
			if(damage(mid, h, attack, cooldown)){
				hi = mid;
			}else{
				lo = mid+1;
			}
		}
		cout << lo << '\n';
		
	}

}

