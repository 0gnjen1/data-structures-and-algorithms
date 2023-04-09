#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int k; cin >> k;

        vector<vector<int>> grid (n+1, vector<int>(n+1));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                int num; cin >> num;
                grid[i][j] = num;
            }
        }

        int cnt = 0;
        for(int i=1; i<=n; i++){

            for(int j=1; j<=n; j++){
                if(grid[i][j] != grid[n-i+1][n-j+1]) cnt++;
            }

        }

        cnt /= 2;

        if(cnt > k){
            cout << "NO" << endl;
            continue;
        }

        if(n%2){
            cout << "YES" << endl;
            continue;
        }

        cout << ((k-cnt)%2 ? "NO" : "YES") << endl;

    }

}
