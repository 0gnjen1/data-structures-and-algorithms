#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n, m; cin >> n >> m;
        int arr[n];
        for(auto& a : arr) cin >> a;

        int border = n;
        while(arr[border-1] == border){
            border--;
            if(border == 0) break;
        }

        double ans = 1;
        bool isFirstDone = false;
        for(int i=0; i<m; i++){

            int x; cin >> x;
            double prob; cin >> prob;

            if(border == 0) continue;
            if(x < border) continue;

            if(!isFirstDone){
                ans = prob;
                isFirstDone = true;
                continue;
            }

            ans += (1 - ans) * prob;

        }

        if(!isFirstDone && border != 0){
            cout << (double)0 << endl;
            continue;
        }
        cout << ans << endl;

    }

}
