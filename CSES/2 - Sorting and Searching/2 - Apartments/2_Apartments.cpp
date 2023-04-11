#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, k; cin >> n >> m >> k;

    vector<int> ppl (n);
    for(auto& p : ppl) cin >> p;
    vector<int> apt (m);
    for(auto& a : apt) cin >> a;

    sort(ppl.begin(), ppl.end());
    sort(apt.begin(), apt.end());

    int cnt = 0;
    int index = -1;
    for(int i=0; i<n; i++){

        int oldindex = index;
        index = upper_bound(apt.begin()+(index+1), apt.end(), ppl[i]-k-1) - apt.begin();

        if( (apt[index] >= (ppl[i]-k)) && (apt[index] <= (ppl[i]+k)) ){
            cnt++;
            continue;
        }

        index = oldindex;

    }

    cout << cnt << endl;

}
