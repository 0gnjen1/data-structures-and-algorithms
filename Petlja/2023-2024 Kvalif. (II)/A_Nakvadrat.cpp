#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int64_t x1, y1; cin >> x1 >> y1;
    int64_t x2, y2; cin >> x2 >> y2;
    int64_t x3, y3; cin >> x3 >> y3;

    int64_t maxi_x = max(abs(x1-x2), max(abs(x1-x3), abs(x2-x3)));
    int64_t maxi_y = max(abs(y1-y2), max(abs(y1-y3), abs(y2-y3)));

    cout << max(maxi_x, maxi_y) * max(maxi_x, maxi_y);

}
