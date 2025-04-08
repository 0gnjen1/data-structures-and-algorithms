#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n; cin >> n;
	set<int> current_movies;
	vector<int> movie_begin;
	vector<pair<int, pair<int, int>>> times; 
	for(int i=0; i<n; i++){
		int a, b; cin >> a >> b;
		movie_begin.push_back(a);
		times.push_back(make_pair(a, make_pair(1, i)));
		times.push_back(make_pair(b, make_pair(0, i)));
	}
	sort(times.begin(), times.end());
	int ans = 0;
	for(int i=0; i<2*n; i++){
		if(times[i].second.first) current_movies.insert(times[i].second.second); 
		else if(current_movies.contains(times[i].second.second)){
			ans++;
			vector<int> to_remove;
			for(const int& current : current_movies) if(movie_begin[current] != times[i].first) to_remove.push_back(current);
			for(const auto& remove : to_remove) current_movies.erase(remove);
		}
	
	}
	cout << ans;
}

