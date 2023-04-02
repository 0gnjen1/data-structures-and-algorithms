#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        string str; cin >> str;
        int mini = 1000;
        int index = 0;
        for(int i=0; i<n; i++){

            if(mini >= int(str[i])) index = i;
            mini = min(mini, int(str[i]));

        }

        cout << str[index];
        for(int i=0; i<n; i++){
            if(i == index) continue;
            cout << str[i];
        }
        cout << endl;

    }

}
