#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){

        int n, k; cin >> n >> k;
        vector<int> numbers (n+1);
        for(int i=1; i<=n; i++){
            cin >> numbers[i];
        }

        map<int, bool> mp;
        bool possible = true;
        int id = n;
        for(int i=0; i<k; i++){
            if(numbers[id]>n){
                possible = false;
                break;
            }
            if(mp[id]) break;
            mp[id] = true;
            if(numbers[id] == n) break;
            if(id-numbers[id] > 0){
                id -= numbers[id];
                continue;
            }
            id += n-numbers[id];
        }

        if(possible){
            cout << "yes\n";
            continue;
        }
        cout << "no\n";

    }

}
