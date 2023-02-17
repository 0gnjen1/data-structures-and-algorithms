#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        int n;
        string s;
        cin >> n >> s;

        int ans = 0;
        int opening = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '(') opening++;
            else{
                opening--;
                if(opening < 0){
                    opening = 0;
                    ans++;
                }
            }
        }

        cout << ans << endl;

    }
}
