#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        vector<int> arr1 (n);
        for(auto& x : arr1) cin >> x;

        vector<int> arr2 (n);
        for(auto& y : arr2) cin >> y;

        int l_ptr = 0;
        while(arr1[l_ptr] == arr2[l_ptr]) l_ptr++;

        int r_ptr = (n-1);
        while(arr1[r_ptr] == arr2[r_ptr]) r_ptr--;

        int l = l_ptr;
        int r = r_ptr;

        while(arr2[l_ptr] >= arr1[l-1] && arr2[l] >= arr1[l-1] && l>0) l--;
        while(arr2[r_ptr] <= arr1[r+1] && arr2[r] <= arr1[r+1] && r<(n-1)) r++;

        cout << l+1 << " " << r+1 << endl;

    }

}
