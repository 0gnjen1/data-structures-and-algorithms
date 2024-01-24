#include <bits/stdc++.h>

using namespace std;

int main(){

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		vector<int> a (n);
		for(auto& x : a) cin >> x;

		vector<int> p;
		p.push_back(1e6);
		vector<int> q;
		q.push_back(1e6);
		int penalty = 0;

		for(const auto& x : a){
			if((x<p[p.size()-1] && x<q[q.size()-1]) || (x>p[p.size()-1] && x>q[q.size()-1])){
                if(x>p[p.size()-1] && x>q[q.size()-1]) penalty++;
				(q[q.size()-1]<p[p.size()-1] ? q.push_back(x) : p.push_back(x));
			}
			if(x>min(p[p.size()-1], q[q.size()-1]) && x<max(p[p.size()-1], q[q.size()-1])){
                		(q[q.size()-1]>p[p.size()-1] ? q.push_back(x) : p.push_back(x));
			}
			(q[q.size()-1]==x ? q.push_back(x) : p.push_back(x));
		}

		cout << penalty << '\n';

	}

}
