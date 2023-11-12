#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){

        int n, q; cin >> n >> q;

        vector<int> nums (n);
        for(auto& num : nums) cin >> num;

        map<int, bool> mp;
        vector<int> modifications;
        for(int i=0; i<q; i++){
            int modi; cin >> modi;
            if(mp[modi]) continue;
            mp[modi] = true;
            modifications.push_back(modi);
        }

        for(int i=0; i<n; i++){

            for(int j=0; j<modifications.size(); j++){

                if(nums[i]%(int)pow(2, modifications[j]) == 0){
                    nums[i] += (int)pow(2, modifications[j]-1);
                }

            }

        }

        for(auto& num : nums) cout << num << ' ';
        cout << '\n';

    }

}
