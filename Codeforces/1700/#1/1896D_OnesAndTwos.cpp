#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n, q; cin >> n >> q;
		int sum = 0;
		set<int> ones;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			sum += x;
			if(x == 1) ones.insert(i+1);
		}	
		for(int i=0; i<q; i++){
			int type; cin >> type;
			if(type == 1){
				int querysum; cin >> querysum;
				if(sum<querysum){
					cout << "NO\n";
				}else if(sum%2 == querysum%2){
					cout << "YES\n";
				}else if(ones.empty()){
					cout << "NO\n";
				}else if((sum - 2*(min(*ones.begin()-1, n-*ones.rbegin())) - 1)>=querysum){
					cout << "YES\n";
				}else{
					cout << "NO\n";
				}
			}else{ 
				int index, value; cin >> index >> value;
				if( ones.contains(index) && value==2 ){
					ones.erase(index);
					sum++;
				}else if( !ones.contains(index) && value==1 ){
					ones.insert(index);
					sum--;
				}
			}
		}

	}

}


