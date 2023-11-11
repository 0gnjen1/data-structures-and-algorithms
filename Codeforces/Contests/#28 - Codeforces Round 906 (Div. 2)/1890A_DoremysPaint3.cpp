#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int t; cin >> t;
    while(t--){

        map<int, int> mp;
        int howmany = 0;
        int n; cin >> n;
        for(int i=0; i<n; i++){
            int el; cin >> el;
            if(mp[el] == 0) howmany++;
            mp[el]++;
        }
        if(howmany > 2){
            cout << "no\n";
        }else if(howmany == 1){
            cout << "yes\n";
        }else{
            int n1, n2;
            map<int, int>::iterator it = mp.begin();
            n1 = it->second;
            it++;
            n2 = it->second;
            int diff = n1-n2;
            if(diff == -1 || diff == 1 || diff == 0){
                cout << "yes\n";
                continue;
            }
            cout << "no\n";
        }



    }

}
