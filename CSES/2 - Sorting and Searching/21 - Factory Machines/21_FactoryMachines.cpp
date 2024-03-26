/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

int64_t yield(const vector<int>& machines, const int& goal,  const int64_t time){
	int64_t answer = 0;
	for(const int& machine : machines){
		answer += time/((int64_t)machine);
		if(answer > goal) return -1;
	}
	return answer;
}

int is_ans(const vector<int>& machines, const int64_t& goal, const int64_t time){
	int64_t current_yield = yield(machines, goal, time);
	if(current_yield >= goal || current_yield == -1){
		if(yield(machines, goal, time-1) < goal && yield(machines, goal, time-1) != -1) return 0;
		return -1;
	}
	// current_yield < goal
	return 1;
}

int64_t search(const vector<int>& machines, const int& goal, int64_t l, int64_t r){
	int64_t mid = l + (r-l)/2;
	int64_t response_top = is_ans(machines, goal, mid+1);
	if(response_top == 0) return mid+1;
	int64_t response = is_ans(machines, goal, mid);
	if(response == 0) return mid;
	if(response == -1) return search(machines, goal, l, mid);
	// response == 1
	return search(machines, goal, mid, r);
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int64_t n, k; cin >> n >> k;
	vector<int> mchns (n);
	for(int& mchn : mchns) cin >> mchn;
	cout << search(mchns, k, (int64_t)0, (int64_t)(1e18+10)) << '\n';

}

