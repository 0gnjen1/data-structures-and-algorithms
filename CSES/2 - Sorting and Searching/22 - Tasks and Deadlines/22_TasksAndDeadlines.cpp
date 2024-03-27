/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

struct task {
	int length, deadline;
	bool operator < (const task& other) const {
		if(length == other.length) return deadline > other.deadline;
		return length < other.length; 
	}
};

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n; cin >> n;
	vector<task> tasks (n);
	for(int i=0; i<n; i++) cin >> tasks[i].length >> tasks[i].deadline;
	sort(tasks.begin(), tasks.end());
	int64_t time = 0;
	int64_t score = 0;
	for(const auto& ta : tasks){
		time += ta.length;
		score += (int64_t)ta.deadline-time;
	}
	cout << score << '\n';

}

