#include <iostream>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        if((n%20) != 19){
            cout << (n/2) << " " << ((n/2) + (n%2)) << endl;
            continue;
        }

        cout << ((n-19)/2)+14 << " " << ((n-19)/2)+5 << endl;

    }

}
