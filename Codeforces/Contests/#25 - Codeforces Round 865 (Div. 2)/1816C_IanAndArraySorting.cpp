#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        vector<int64_t> arr (n);

        for(auto& a : arr) cin >> a;

        for(int i=0; i<=(n-3); i++){
            if(arr[i] > arr[i+1]){
                arr[i+2] += (arr[i]-arr[i+1]);
                arr[i+1] = arr[i];
            }
        }

        for(int i=(n-1); i>=2; i--){
            if(arr[i] < arr[i-1]){
                arr[i-2] -= (arr[i-1]-arr[i]);
                arr[i-1] = arr[i];
            }
        }

        bool ispossible = true;
        for(int i=0; i<(n-1); i++){
            if(arr[i] > arr[i+1]){
                ispossible = false;
                break;
            }
        }

        cout << (ispossible ? "YES" : "NO") << endl;

    }

}
