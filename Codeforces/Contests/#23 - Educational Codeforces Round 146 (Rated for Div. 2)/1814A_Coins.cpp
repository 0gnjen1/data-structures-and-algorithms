#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int64_t n, k; cin >> n >> k;
        cout << (n%2==0 || (n-k)%2==0 ? "YES" : "NO") << endl;

    }

}
