#include <bits/stdc++.h>

using namespace std;

void explore(int l, int r, vector<int>& numbers, vector<int64_t>& prefix_sum, unordered_map<int64_t, bool>& possibles){

    int64_t sum = prefix_sum[r+1] - prefix_sum[l];
    possibles[sum] = 1;

    int mid = (int)floor((double(numbers[l]) + double(numbers[r])) / 2);

    int index = upper_bound(numbers.begin(), numbers.end(), mid) - numbers.begin();

    if(index <= l || index > r) return;

    explore(l, index-1, numbers, prefix_sum, possibles);
    explore(index, r, numbers, prefix_sum, possibles);

    return;

}

int main(){

    int t; cin >> t;
    while(t--){

        int n, q; cin >> n >> q;
        vector<int> nums (n);
        for(auto& n : nums) cin >> n;
        sort(nums.begin(), nums.end());
        vector<int64_t> pref (n+1);
        for(int i=1; i<=n; i++){
            pref[i] += pref[i-1] + (int64_t)nums[i-1];
        }
        unordered_map<int64_t, bool> possib;
        explore(0, n-1, nums, pref, possib);
        for(int i=0; i<q; i++){
            int query; cin >> query;
            cout << (possib[query] ? "YES" : "NO") << endl;
        }

    }

}
