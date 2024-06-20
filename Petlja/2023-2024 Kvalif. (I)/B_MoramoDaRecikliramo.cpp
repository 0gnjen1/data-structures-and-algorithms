#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> container (n+1);
    for(int i=1; i<=n; i++){
        int value; cin >> value;
        container[i] = value;
    }
    vector<int> capacity (n+1);
    for(int i=1; i<=n; i++){
       int value; cin >> value;
        capacity[i] = value;
    }

    vector<int64_t> waiting (n+1);
    int q; cin >> q;
    for(int i=0; i<q; i++){
        int k, x; cin >> k >> x;
        waiting[k] += x;
    }

    for(int i=1; i<=n; i++){
        int to_add = (int)min(waiting[i], (int64_t)capacity[i]-container[i]);
        container[i] += to_add;
        cout << container[i] << ' ';
        if(i==n) continue;
        waiting[i+1] += waiting[i]-(int64_t)to_add;
    }

}
