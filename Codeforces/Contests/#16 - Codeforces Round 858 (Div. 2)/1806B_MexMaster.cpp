#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int arr[n];
        int maxi = 0;
        int zerocnt = 0;
        for(int i=0; i<n; i++){
            int a; cin >> a;
            if(a == 0) zerocnt++;
            else maxi = max(a, maxi);
        }

        if(zerocnt == n) cout << 1 << endl;
        else if(zerocnt <= ((n/2)+(n%2))) cout << 0 << endl;
        else if(maxi > 1) cout << 1 << endl;
        else cout << 2 << endl;

    }

}
