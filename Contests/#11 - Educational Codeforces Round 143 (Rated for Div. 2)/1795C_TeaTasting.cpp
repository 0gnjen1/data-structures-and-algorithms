#include <iostream>
#include <algorithm>
using namespace std;

int64_t binarySearch(int64_t arr[], int l, int r, int64_t x)
{
    int mid = l + (r - l) / 2;

    if (r > l) {
        int mid = l + (r - l) / 2;

        if ( arr[mid] == x)
            return mid;

        if (arr[mid-1] < x && arr[mid] > x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return mid;
}

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        int64_t tea[n];
        for(int i=0; i<n; i++) cin >> tea[i];

        int64_t taste[n];
        for(int i=0; i<n; i++) cin >> taste[i];

        int64_t sum[1+n+1];
        sum[0] = 0;
        sum[1] = taste[0];
        for(int i=2; i<(n+2); i++) sum[i] = sum[i-1] + taste[i-1];

        int64_t intervals[n+1] = {0};
        int64_t leftovers[n+1] = {0};

        for(int i=0; i<n; i++){


            int last_drinker_index = binarySearch(sum, 1, n+1, tea[i]+sum[i]) - 1;

            intervals[i]++;
            intervals[last_drinker_index]--;

            leftovers[last_drinker_index] += tea[i] - (sum[last_drinker_index] - sum[i]);

        }

        for(int i=1; i<=n; i++) intervals[i] = intervals[i] + intervals[i-1];

        for(int i=0; i<n; i++){
            leftovers[i] += intervals[i] * taste[i];
            cout << leftovers[i] << " ";
        }

        cout << endl;

    }

}
