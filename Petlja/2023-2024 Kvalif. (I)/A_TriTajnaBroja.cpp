#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums(7);
    for(auto& num : nums) cin >> num;
    sort(nums.begin(), nums.end());
    if(nums[0]+nums[1]<=nums[2]){
        cout << nums[0] << ' ' << nums[1] << ' ' << nums[3];
        return 0;
    }
    cout << nums[0] << ' ' << nums[1] << ' ' << nums[2];
}
