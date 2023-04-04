#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        vector<int> novi (n-1);
        for(auto& x : novi) cin >> x;

        vector<int> stari (n, -1);
        stari[0] = novi[0];

        for(int i=1; i<(n-1); i++){

            stari[i] = min(novi[i-1], novi[i]);

        }

        stari[n-1] = novi[n-2];

        for(auto& s : stari) cout << s << " ";
        cout << endl;

    }

}
