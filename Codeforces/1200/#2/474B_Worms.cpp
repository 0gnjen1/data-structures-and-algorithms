// Solution to the problem that can be found here:
// https://codeforces.com/problemset/problem/474/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> pref(n+2);
    for(int i=1; i<(n+1); i++){

        int pile; cin >> pile;
        pref[i] = pref[i-1] + pile;

    }
    pref[n+1] = pref[n]*2;

    int m; cin >> m;
    for(int i=0; i<m; i++){

        int value; cin >> value;
        int found;
        cout << (upper_bound(pref.begin(), pref.end(), value-1) - pref.begin()) << endl;

    }

}
