#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        vector<vector<int>> grid ((2*n)+1, vector<int>(2));

        for(int i=1; i<=n; i++) grid[i][i%2] = i;
        for(int i=(n+2); i<=(2*n); i++) grid[i-n][1-(i%2)] = i-1;
        grid[1][0] = 2*n;

        for(int i=1; i<=n; i++) cout << grid[i][0] << " ";
        cout << endl;
        for(int i=1; i<=n; i++) cout << grid[i][1] << " ";
        cout << endl;

    }

}
