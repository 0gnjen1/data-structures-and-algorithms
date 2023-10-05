#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >>t;
    while(t--){

        int n; cin >> n;
        int k; cin >> k;
        vector<int64_t> a(n+2);
        vector<int> h(n+2);
        for(int i=1; i<=n; i++){
            int x; cin >> x;
            a[i]=x;
        }
        for(int i=1; i<=n+1; i++) a[i]+=a[i-1];
        for(int i=1; i<=n; i++){
            int x; cin >> x;
            h[i]=x;
        }

        int l = 1;
        int r = 1;
        int best = 0;
        while(l<=n && r<=n){
            int curr = a[r]-a[l-1];
            if(curr <= k)
                best = max(best, r-l+1);
            if(curr > k){
                l++;
                r=max(r, l);
                continue;
            }
            if(r<n && h[r]%h[r+1]==0){
                r++;
                continue;
            }
            if(l==r){
                r++;
                l++;
                continue;
            }
            l++;
        }

        cout << best << '\n';

    }

}
