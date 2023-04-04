#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n, x1, y1, x2, y2; cin >> n >> x1 >> y1 >> x2 >> y2;

        x1 = (x1 <= (n/2) ? x1 : n-x1+1);
        x1 = (x1 <= (n/2) ? x1 : n-x1+1);
        x1 = (n/2) - x1 + 1;
        y1 = (y1 <= (n/2) ? y1 : n-y1+1);
        y1 = (y1 <= (n/2) ? y1 : n-y1+1);
        y1 = (n/2) - y1 + 1;

        x2 = (x2 <= (n/2) ? x2 : n-x2+1);
        x2 = (x2 <= (n/2) ? x2 : n-x2+1);
        x2 = (n/2) - x2 + 1;
        y2 = (y2 <= (n/2) ? y2 : n-y2+1);
        y2 = (y2 <= (n/2) ? y2 : n-y2+1);
        y2 = (n/2) - y2 + 1;

        cout << abs(max(x1, y1) - max(x2, y2)) << endl;

    }

}
