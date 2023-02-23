#include <iostream>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n, k; cin >> n >> k;
        bool wasFarLeft = false;
        bool wasFarRight = false;
        bool isSolved = false;

        for(int i=0; i<n; i++){

            int l, r;
            cin >> l >> r;

            if(k == l) wasFarLeft = true;
            if(k == r) wasFarRight = true;

            if(wasFarLeft && wasFarRight){
                cout << "YES" << endl;
                isSolved = true;
            }

        }

        if(!isSolved) cout << "NO" << endl;

    }

}
