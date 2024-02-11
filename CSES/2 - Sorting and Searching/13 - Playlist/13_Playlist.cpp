#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n; cin >> n;
	int longest = 0;
	map<int, int> last_time_played;
	for(int i=1, j=0; i<=n; i++){
		int song; cin >> song;
		j = max(j, last_time_played[song]);
		longest = max(longest, i-j);
		last_time_played[song] = i;
	}	
	cout << longest;

}

