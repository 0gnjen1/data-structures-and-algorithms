#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int mountains[n];
        for(auto& m : mountains) cin >> m;
        sort(mountains, mountains + n);

        int mini = 2e9;
        int index;
        for(int i=0; i<(n-1); i++){
            if( abs(mountains[i]-mountains[i+1]) < mini ){
                index = i;
                mini = abs(mountains[i]-mountains[i+1]);
            }
        }

        if(n==2){
            cout << mountains[0] << " " << mountains[1] << endl;
            continue;
        }

        for(int i=(index+1); i<n; i++){
            cout << mountains[i] << " ";
        }
        for(int i=0; i<(index+1); i++){
            cout << mountains[i] << " ";
        }
        cout << endl;

    }

}
