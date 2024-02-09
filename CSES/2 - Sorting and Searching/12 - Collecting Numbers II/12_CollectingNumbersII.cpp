#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n, m; cin >> n >> m;
	vector<int> id_to_num (n+2);
	vector<int> num_to_id (n+2);
	num_to_id[n] = n;
	for(int i=1; i<=n; i++){
		int number; cin >> number;
		num_to_id[number] = i;
		id_to_num[i] = number;
	}
	int rounds = 1;
	for(int i=1; i<=n; i++){
		if(num_to_id[i-1]>num_to_id[i]) rounds++;
	}
	for(int i=0; i<m; i++){
	
		int a, b; cin >> a >> b;
		if(a == b){
			cout << rounds << '\n';
			continue;
		}

		a = id_to_num[a];
		b = id_to_num[b];
		if(a>b) swap(a, b);
		swap(id_to_num[num_to_id[a]], id_to_num[num_to_id[b]]);
			
		int past = 0;
		past += (num_to_id[a-1]>num_to_id[a] ? 1 : 0);
		past += (num_to_id[a]>num_to_id[a+1] ? 1 : 0);
		if(a+1 != b) past += (num_to_id[b-1]>num_to_id[b] ? 1 : 0);
		past += (num_to_id[b]>num_to_id[b+1] ? 1 : 0);

		swap(num_to_id[a], num_to_id[b]);		

		int present = 0;
		present += (num_to_id[a-1]>num_to_id[a] ? 1 : 0);
		present += (num_to_id[a]>num_to_id[a+1] ? 1 : 0);
		if(a+1 != b) present += (num_to_id[b-1]>num_to_id[b] ? 1 : 0);
		present += (num_to_id[b]>num_to_id[b+1] ? 1 : 0);

		rounds = rounds - past + present;

		cout << rounds << '\n';

	}

}

