#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n, m; cin >> n >> m;
        int x, y, xx, yy; cin >> x >> y >> xx >> yy;

        int ans = 4;
        if(x == 1 || y == 1 || xx == 1 || yy == 1 ||
           x == n || xx == n || y == m || yy == m) ans = 3;

        if(((x == 1) && (y == 1)) || ((xx == 1) && (yy == 1)) ||
           ((x == 1) && (y == m)) || ((xx == 1) && (yy == m)) ||
           ((x == n) && (y == 1)) || ((xx == n) && (yy == 1)) ||
           ((x == n) && (y == m)) || ((xx == n) && (yy == m))) ans = 2;

        cout << ans << endl;

    }

}
