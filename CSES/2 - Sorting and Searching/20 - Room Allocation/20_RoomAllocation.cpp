/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

struct range {

	int l, r, index;

	bool operator < (const range& other) const {
		if(l == other.l) return r < other.r;
		return l < other.l;
	}

};

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n; cin >> n;
	vector<range> ranges (n);
	for(int i=0; i<n; i++){
		cin >> ranges[i].l >> ranges[i].r;
		ranges[i].index = i;
	}
	sort(ranges.begin(), ranges.end());
	
	vector<int> rooms (n);
	priority_queue<pair<int,int>> endings;
	int current_room = 1;
	
	endings.push(make_pair(-ranges[0].r, current_room));
	rooms[ranges[0].index] = current_room;
	current_room++;
	
	for(int i=1; i<n; i++){
		pair<int, int> best = endings.top(); // first=ending second=room
		if( ranges[i].l > best.first*(-1) ){
			endings.pop();
			endings.push(make_pair(-ranges[i].r, best.second));
			rooms[ranges[i].index] = best.second;
			continue;
		}
		endings.push(make_pair(-ranges[i].r, current_room));
		rooms[ranges[i].index] = current_room;
		current_room++;
	}

	cout << current_room-1 << '\n';	
	for(const auto& room : rooms) cout << room << ' ';

}

