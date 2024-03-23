/*
	    Github: 0gnjen1
	Codeforces: 0gnjen1
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void search(int n, const string& str1, const string& str2, vector<vector<bool>>& possible_to_visit, int i, int j){
	possible_to_visit[i][j] = true;
	int newj = 0;
	if(i==0){

		//down
		if(str2[j]=='>') newj = j+1;
		else newj = j-1;
		if(!possible_to_visit[1][newj]) search(n, str1, str2, possible_to_visit, i^1, newj);

		//left
		if(j!=0){
			if(str1[j-1]=='>') newj = j;
			else newj = j-2;
			if(!possible_to_visit[0][newj]) search(n, str1, str2, possible_to_visit, i, newj);
		}

		//right
		if(j!=n-1){
			if(str1[j+1]=='>') newj = j+2;
			else newj = j;	
			if(!possible_to_visit[0][newj]) search(n, str1, str2, possible_to_visit, i, newj);
		}

	}else{//i=1

		//up
		if(str1[j]=='>') newj = j+1;
		else newj = j-1;
		if(!possible_to_visit[0][newj]) search(n, str1, str2, possible_to_visit, i^1, newj);


		//left
		if(j!=0){
			if(str2[j-1]=='>') newj = j;
			else newj = j-2;
			if(!possible_to_visit[1][newj]) search(n, str1, str2, possible_to_visit, i, newj);
		}
		//right
		if(j!=n-1){
			if(str2[j+1]=='>') newj = j+2;
			else newj = j;
			if(!possible_to_visit[1][newj]) search(n, str1, str2, possible_to_visit, i, newj);
		}

	}

}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		string first_row; cin >> first_row;
		string second_row; cin >> second_row;
		vector<vector<bool>> visitable (2, vector<bool>(n));
		search(n, first_row, second_row, visitable, 0, 0);
		cout << (visitable[1][n-1] ? "YES\n" : "NO\n");
		
	}

}

