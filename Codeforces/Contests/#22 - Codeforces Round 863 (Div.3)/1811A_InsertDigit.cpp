#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n, d; cin >> n >> d;
        string number; cin >> number;
        vector<int> digits;
        for(int i=(n-1); i>=0; i--){
            digits.push_back(int(number[i]) - 48);
        }
        int index = -1;
        for(int i=(n-1); i>=0; i--){
            if(digits[i] < d){
                index = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(index == i && d != 0) cout << d;
            cout << digits[i];
        }
        if(index == -1) cout << d;
        cout << endl;

    }

}
