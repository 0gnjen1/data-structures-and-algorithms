// NOTE: Zadatak je uradjen za 30 poena

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, l; cin >> n >> m >> k >> l;
    vector<int> a (n*m);
    for(auto& x : a) cin >> x;
    sort(a.begin(), a.end());

    vector<int> mul1 (n, 1e9);
    for(int i=0; i<n; i++){
        mul1[i] = min(i+1, n-k+1);
    }
    for(int i=0; i<n; i++){
        mul1[n-1-i] = min(mul1[n-1-i], min(i+1, n-k+1));
    }

    vector<int> mul2 (m, 1e9);
    for(int i=0; i<m; i++){
        mul2[i] = min(i+1, m-l+1);
    }
    for(int i=0; i<m; i++){
        mul2[m-1-i] = min(mul2[m-1-i] ,min(i+1, m-l+1));
    }

    vector<int64_t> cnts;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cnts.push_back((int64_t)mul1[i]*(int64_t)mul2[j]);
        }
    }

    sort(cnts.begin(), cnts.end());

    int64_t ans = 0;
    for(int i=0; i<(n*m); i++){
        ans += ((int64_t)a[i])*cnts[i];
    }

    cout << ans << endl;

}
