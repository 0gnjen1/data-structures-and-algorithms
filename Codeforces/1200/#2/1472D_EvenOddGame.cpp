#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr, arr+n, greater<int>());
        long long int AliceScore = 0;
        long long int BobScore = 0;

        for(int i=0; i<n; i++){
            if(i%2){
                if(arr[i]%2) BobScore += arr[i];
                continue;
            }
            if(arr[i]%2 == 0) AliceScore += arr[i];
        }

        if(AliceScore == BobScore){
            cout << "Tie" << endl;
        }
        else if(AliceScore > BobScore){
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }

    }
}
