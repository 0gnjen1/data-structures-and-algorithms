#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    int cnt = 0;
    map<int, bool> a_map;

    for(int i=0; i<n; i++){
        int num; cin >> num;
        if(!a_map[num]) cnt++;
        a_map[num] = true;
    }

    cout << cnt << endl;

}
