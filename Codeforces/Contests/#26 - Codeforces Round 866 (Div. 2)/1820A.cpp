#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        string s; cin >> s;

        if(s.length() == 1){
            cout << (s[0] == '_' ? 2 : 1) << endl;
            continue;
        }

        int ans = 0;

        if(s[0] == '_') ans++;

        for(int i=1; i<s.length(); i++){
            if(s[i] == '_' && s[i-1] == '_')ans++;
        }

        if(s[s.length()-1] == '_') ans++;

        cout << ans << endl;

    }

}
