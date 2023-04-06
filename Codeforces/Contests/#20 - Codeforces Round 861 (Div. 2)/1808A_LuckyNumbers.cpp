#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int l, r; cin >> l >> r;
        int maxi = 0;
        int ans = l;

        for(int i=l; i<=r; i++){

            int big = 0;
            int small = 10;
            int num = i;
            while(num){

                small = min(small, num%10);
                big = max(big, num%10);
                num /= 10;

            }

            if(big-small > maxi) ans = i;
            maxi = max(maxi, big-small);
            if(maxi == 9) break;

        }

        cout << ans << endl;

    }

}
