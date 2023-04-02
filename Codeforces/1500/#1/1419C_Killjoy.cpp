#include <bits/stdc++.h>

using namespace std;

int main(){

        int t; cin >> t;
        while(t--){

            int n, x; cin >> n >> x;
            int sum = 0;
            int cnt = 0;
            for(int i=0; i<n; i++){

                int val; cin >> val;
                if(val == x) cnt++;
                sum += x - val;

            }

            cout << (cnt == n ? 0 : ((sum == 0) || (cnt > 0)) ? 1 : 2) << endl;

        }

}
