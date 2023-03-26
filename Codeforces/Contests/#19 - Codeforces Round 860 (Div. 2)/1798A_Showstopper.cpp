#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        int a[n];
        for(auto& x : a) cin >> x;

        int b[n];
        for(auto& x : b) cin >> x;

        bool possible = true;
        for(int i=0; i<n; i++){

            if(a[i] <= a[n-1] && b[i] <= b[n-1] ||
               a[i] <= b[n-1] && b[i] <= a[n-1]) continue;
            possible = false;

        }

        cout << (possible ? "YES" : "NO") << endl;

    }

}
