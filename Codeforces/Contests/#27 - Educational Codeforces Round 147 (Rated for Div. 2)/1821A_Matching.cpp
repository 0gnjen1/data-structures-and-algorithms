#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        string tmplt; cin >> tmplt;

        if(tmplt[0] == '0'){
            cout << 0 << endl;
            continue;
        }

        if(tmplt.length() == '1'){
            cout << (tmplt[0] == '?' ? 9 : 1) << endl;
            continue;
        }

        int ans = 1;
        int cnt = (tmplt[0] == '?' ? 1 : 0);
        if(tmplt[0] == '?') ans = 9;
        for(int i=1; i<tmplt.length(); i++){
            if(tmplt[i] == '?'){
                ans *= 10;
                cnt++;
            }
        }

        cout << (cnt == 0 ? 1 : ans) << endl;

    }

}
