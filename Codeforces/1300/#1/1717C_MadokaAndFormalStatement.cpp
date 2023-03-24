#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        int first[n+1];
        for(int i=0; i<n; i++){
            int f; cin >> f;
            first[i] = f;
        }
        first[n] = first[0];

        int second[n+1];
        for(int i=0; i<n; i++){
            int s; cin >> s;
            second[i] = s;
        }
        second[n] = second[0];

        bool possible = true;
        for(int i=0; i<n; i++){
            if(first[i] == second[i] ||
              (first[i] < second[i] && second[i] <= second[i+1]+1)) continue;
            else possible = false;
        }

        cout << (possible ? "YES" : "NO") << endl;

    }

}
