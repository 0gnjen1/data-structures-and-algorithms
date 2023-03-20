#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        string s; cin >> s;
        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        unordered_map<char, int> strmap;
        strmap[s[0]] = 10;
        bool isPossible = true;
        for(int i=1; i<n; i++){

            if(strmap[s[i]] == 0){
                if(strmap[s[i-1]] == 10) strmap[s[i]] = 20;
                else strmap[s[i]] = 10;
                continue;
            }

            if(strmap[s[i]] == strmap[s[i-1]]){
                isPossible = false;
                break;
            }

        }

        cout << (isPossible ? "YES" : "NO") << endl;

    }

}
