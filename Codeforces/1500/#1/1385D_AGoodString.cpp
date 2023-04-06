#include <bits/stdc++.h>

using namespace std;

int solve(vector<int>& arr, int l, int r, int x){

    if(l == r) return !arr[l] == x;

    if((r-l) == 1){

        if( (arr[l] == x && arr[r] == x+1) || (arr[r] == x && arr[l] == x+1) ) return 0;
        if( arr[l] == x || arr[l] == x+1 || arr[r] == x || arr[r] == x+1 ) return 1;
        return 2;

    }

    int cnt1 = 0;
    for(int i=(l+r)/2+1; i<=r; i++) if(arr[i]==x) cnt1++;
    int ans1 = solve(arr, l, (l+r)/2, x+1) + (r-l)/2 + 1 - cnt1;

    int cnt2 = 0;
    for(int i=l; i<=(l+r)/2; i++) if(arr[i]==x) cnt2++;
    int ans2 = solve(arr, (l+r)/2+1, r, x+1) + (r-l)/2 + 1 - cnt2;

    return min(ans1, ans2);

}

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        string str; cin >> str;
        vector<int> nums (n+1);
        for(int i=1; i<=n; i++) nums[i] = int(str[i-1])-97;
        cout << solve(nums, 1, n, 0) << endl;

    }

}
