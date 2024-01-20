#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n, m; cin >> n >> m;
        vector<int> a (n);
        for(int i=0; i<n; i++){
            int x; cin >> x;
            a[i] = x;
        }
        vector<int> b (m);
        for(int i=0; i<m; i++){
            int x; cin >> x;
            b[i] = x;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int la = 0;
        int lb = 0;
        int ra = n-1;
        int rb = m-1;

        int64_t d = 0;

        while(la<=ra){

            int maxi = max(
                max(abs(a[la]-b[lb]), abs(a[la]-b[rb])),
                max(abs(a[ra]-b[lb]), abs(a[ra]-b[rb]))
            );

            //cout << "la: " << la << " ra: " << ra << '\n';
            //cout << "maxi: " << maxi << '\n';

            d+=(int64_t)maxi;

            if(maxi == abs(a[la]-b[lb])){
                la++;
                lb++;
                continue;
            }
            if(maxi == abs(a[la]-b[rb])){
                la++;
                rb--;
                continue;
            }
            if(maxi == abs(a[ra]-b[lb])){
                ra--;
                lb++;
                continue;
            }
            if(maxi == abs(a[ra]-b[rb])){
                ra--;
                rb--;
                continue;
            }

        }

        cout << d << '\n';

    }

}
