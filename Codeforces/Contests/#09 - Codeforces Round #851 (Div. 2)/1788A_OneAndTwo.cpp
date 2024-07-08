#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int nums[n] = {};

        for(int i=0; i<n; i++){

            int x; cin >> x;
            if(i>0) nums[i] = nums[i-1];
            if(x==2) nums[i]++;

        }

        if(nums[n-1]%2){
            cout << -1 << endl;
            continue;
        }

        int possible_solution;
        possible_solution = binarySearch(nums, 0, n, (nums[n-1]/2));

        while((nums[possible_solution] == nums[possible_solution-1]) && (possible_solution != 0)){
            possible_solution--;
        }

        cout << possible_solution+1 << endl;

    }

}
