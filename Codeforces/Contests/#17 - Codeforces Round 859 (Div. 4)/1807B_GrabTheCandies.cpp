#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int candies[n];
        int evens = 0;
        int odds = 0;
        for(auto& c : candies){
            cin >> c;
            if(c%2) odds += c;
            else evens += c;
        }

        cout << (evens > odds ? "YES" : "NO") << endl;

    }

}
