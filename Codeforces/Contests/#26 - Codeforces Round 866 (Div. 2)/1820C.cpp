#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int arr[n];
        vector<int> sorted;
        map<int, int> amap;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            arr[i] = x;
            if(x < n){
                if(amap[x]) continue;
                amap[x] = 1;
                sorted.push_back(x);
            }
        }

        int mex = sorted.size();
        sort(sorted.begin(), sorted.end());
        for(int i=0; i<sorted.size(); i++){
            if(sorted[i] != i){
                mex = i;
                break;
            }
        }

        if(mex == 0){
            cout << "YES" << endl;
            continue;
        }

        bool isPresent = false;
        for(int i=0; i<n; i++){
            if(arr[i] == mex+1){
                isPresent = true;
                continue;
            }
        }

        if(!isPresent){
            cout << (n < mex+1 ? "NO" : "YES") << endl;
            continue;
        }

        int l = 0;
        int r = (n-1);

        while(arr[l] != mex+1) l++;
        while(arr[r] != mex+1) r--;

        vector<int> newsorted;
        map<int, int> newmap;
        for(int i=0; i<l; i++){
            if(arr[i] > (l+n-1-r)) continue;
            if(newmap[arr[i]]) continue;
            newmap[arr[i]] = 1;
            newsorted.push_back(arr[i]);
        }
        for(int i=r+1; i<n; i++){
            if(arr[i] > (l+n-1-r)) continue;
            if(newmap[arr[i]]) continue;
            newmap[arr[i]] = 1;
            newsorted.push_back(arr[i]);
        }

        int newmex = newsorted.size();
        sort(newsorted.begin(), newsorted.end());
        for(int i=0; i<newsorted.size(); i++){
            if(newsorted[i] != i){
                newmex = i;
                break;
            }
        }

        cout << (mex == newmex ? "YES" : "NO") << endl;

    }

}
