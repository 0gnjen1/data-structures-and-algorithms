#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int x, y; cin >> x >> y;

        if(x == 1 || y == 1){
            cout << 1 << endl;
            cout << x << " " << y << endl;
            continue;
        }

        cout << 2 << endl;
        cout << x-1 << " " << 1 << endl;
        cout << x << " " << y << endl;

    }

}
