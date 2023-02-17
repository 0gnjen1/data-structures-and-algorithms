#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int maxi, mini;
        cin >> maxi >> mini;

        cout << abs(maxi-mini)*2 << endl;

        int i = 0;
        while(maxi-i > mini){
            cout << maxi-i << " ";
            i++;
        }

        cout << mini << " ";

        i = 1;
        while(mini+i < maxi){
            cout << mini+i << " ";
            i++;
        }

        cout << endl;

    }

}


