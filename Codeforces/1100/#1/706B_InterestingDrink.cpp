// Solution to the problem that can be found here:
// https://codeforces.com/problemset/problem/706/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    vector<int> prices(n+1);
    for(int i=1; i<(n+1); i++){
        int price;
        cin >> price;
        prices[i] = price;
    }
    sort(prices.begin(), prices.end());

    int q; cin >> q;
    for(int i=0; i<q; i++){

        int money; cin >> money;
        cout << (upper_bound(prices.begin(), prices.end(), money) - prices.begin() - 1) << endl;

    }

}
