#include <bits/stdc++.h>

using namespace std;

void cnt(int x, int y, vector<vector<int>>& grid, map<pair<int, int>, int>& visited, map<pair<int, int>, int>& dirty, vector<int>& times_seen, int& sum){

    if( (x == 0) || (visited[make_pair(x, y)]) || (y == 0) ) return;

    visited[make_pair(x, y)] = 1;

    if( dirty[make_pair(x, y)] ){
            sum++;
            times_seen[grid[x][y]]++;
    }

    if( max(grid[x-1][y], grid[x][y-1]) ==  grid[x-1][y] ){
        cnt(x-1, y, grid, visited, dirty, times_seen, sum);
    }

    if( max(grid[x-1][y], grid[x][y-1]) == grid[x][y-1] ){
        cnt(x, y-1, grid, visited, dirty, times_seen, sum);
    }

}

int main(){

    int t; cin >> t;
    while(t--){

        int n, m, p; cin >> n >> m >> p;
        vector<vector<int>> dp (n+1, vector<int> (m+1));
        map<pair<int, int>, int> prljavo;
        map<pair<int, int>, int> poseceno;

        for(int i=0; i<p; i++){
            int x, y; cin >> x >> y;
            prljavo[make_pair(x, y)] = 1;
        }

        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + prljavo[make_pair(i, j)];
            }
        }
        vector<int> puta_vidjeno (dp[n][m]+1);

        int suma = 0;
        cnt(n, m, dp, poseceno, prljavo, puta_vidjeno, suma);

        int odgovor = 0;
        for(auto& p : puta_vidjeno){
            if(p == 1) odgovor++;
        }

        cout << odgovor << "\n";

    }

}
