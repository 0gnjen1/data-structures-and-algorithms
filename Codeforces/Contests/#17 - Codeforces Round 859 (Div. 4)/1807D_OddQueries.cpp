#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n, q; cin >> n >> q;
        int arr[n];
        for(auto& a : arr) cin >> a;

        int pref_odds[n+1];
        pref_odds[0] = 0;
        for(int i=1; i<(n+1); i++){
            if(arr[i-1] % 2) pref_odds[i] = (pref_odds[i-1] + 1);
            else pref_odds[i] = pref_odds[i-1];
        }

        bool isArrSumOdd = false;
        if(pref_odds[n] % 2) isArrSumOdd = true;

        for(int i=0; i<q; i++){

            int l, r, k; cin >> l >> r >> k;

            int rangeSize = r - l + 1;
            int isRangeOdd = (pref_odds[r] - pref_odds[l-1]) % 2;

            if(k%2 == 0 || (k%2 && (rangeSize%2 == 0))){
                if(isRangeOdd) cout << (isArrSumOdd ? "NO" : "YES") << endl;
                else  cout << (isArrSumOdd ? "YES" : "NO") << endl;
            }
            else{
                if(isRangeOdd) cout << (isArrSumOdd ? "YES" : "NO") << endl;
                else cout << (isArrSumOdd ? "NO" : "YES") << endl;
            }


        }

    }

}
