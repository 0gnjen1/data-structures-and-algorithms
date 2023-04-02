#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int nums[n];
        int val = 0;
        for(int i=0; i<n; i++){

            int num; cin >> num;
            nums[i] = num;
            val = val ^ num;

        }

        for(int i=0; i<n; i++){
            nums[i] = nums[i] ^ val;
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            ans = nums[i] ^ ans;
        }

        cout << (ans ? -1 : val) << endl;

    }

}
