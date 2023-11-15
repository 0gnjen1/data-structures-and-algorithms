// Solution to the problem that can be found here:
// https://codeforces.com/problemset/problem/489/C

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int m, s;
    cin >> m >> s;

    if( (s*9) < m || (m*9) < s ){
        cout << "-1 -1";
        return 0;
    }

    vector<int> smaller (m);
    int sum = s-1;
    for(int i=(m-1); i>=0; i--){
        smaller[i] = min(sum, 9);
        sum -= min(sum, 9);
    }
    smaller[0]++;

    for(int i=0; i<m; i++){
        cout << smaller[i];
    }
    cout << " ";

    sum = s;
    for(int i=0; i<m; i++){
        cout << min(sum, 9);
        sum -= min(sum, 9);
    }

}
