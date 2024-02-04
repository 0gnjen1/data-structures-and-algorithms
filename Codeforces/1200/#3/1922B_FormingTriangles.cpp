#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		map<int, int64_t> numbers;
		for(int i=0; i<n; i++){
			int num; cin >> num;
			numbers[num]++;
		}
		int cnt = 0;
		int64_t sum = 0;
		for(const auto& [number, count] : numbers){
			if(count > 1) sum += (count*(count-1)/2)*(int64_t)cnt;
			if(count > 2) sum += (count*(count-1)*(count-2)/(int64_t)6);
			cnt += count;
		}
		cout << sum << '\n';
	}

}


