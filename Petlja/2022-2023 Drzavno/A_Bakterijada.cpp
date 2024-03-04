#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        vector<int> bakt (n);
        for(auto& b : bakt) cin >> b;
        sort(bakt.begin(), bakt.end());

        int64_t ans = 0;

        for(int i=n-1; i>=0; i--){
            ans += (int64_t)(bakt[i]) * (int64_t)(i+2);
        }
        ans -= bakt[n-1];

        cout << ans << "\n";

    }

}
