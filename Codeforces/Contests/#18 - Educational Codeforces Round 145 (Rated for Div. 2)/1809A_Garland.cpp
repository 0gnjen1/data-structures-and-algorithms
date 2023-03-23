#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int s; cin >> s;
        int nums[4];
        for(int i=0; i<4; i++){
            nums[i] = s%10;
            s /= 10;
        }
        int appeared[10] = {0};
        int ans = 4;
        appeared[nums[0]]++;
        bool possible = false;
        for(int i=1; i<4; i++){
            if(nums[i] != nums[i-1]) possible = true;
            appeared[nums[i]]++;
            if(appeared[nums[i]] > 2) ans = 6;
        }

        if(!possible){
            cout << -1 << endl;
            continue;
        }

        cout << ans << endl;

    }

}
