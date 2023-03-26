#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int m; cin >> m;

        int last_appr[50005];
        for(int i=0; i<50005; i++){
            last_appr[i] = -1;
        }

        for(int i=0; i<m; i++){

            int n; cin >> n;

            int ppl[n];
            for(int j=0; j<n; j++){
                int p; cin >> p;
                last_appr[p] = i;
            }

        }

        int sln[m] = {0};

        for(int i=0; i<50001; i++){

            sln[last_appr[i]] = i;

        }

        bool possible = true;
        for(int i=0; i<m; i++){
            if(sln[i] == 0) possible = false;
        }

        if(!possible){
            cout << -1 << endl;
            continue;
        }

        for(int i=0; i<m; i++){
            cout << sln[i] << " ";
        }
        cout << endl;

    }

}
