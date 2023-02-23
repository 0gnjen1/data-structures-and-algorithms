#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n, time;
    cin >> n >> time;

    vector<int> pref(n+2);
    pref[0] = 0;
    int input;
    for(int i=1; i<(n+1); i++) cin >> input, pref[i] = input;
    for(int i=1; i<(n+2); i++) pref[i] += pref[i-1];
    pref[n+1] = pref[n]+time+1;
    //for(int i=0; i<(n+2); i++) cout << "pref[" << i << "]: " << pref[i] << endl;
    int best = 0;
    int index;
    for(int i=0; i<n; i++){

        index = upper_bound(pref.begin(), pref.end(), pref[i]+time) - pref.begin() - 1;
        //cout << endl << "i: " << i << " index: " << index;
        if(best < index-i) best = index-i;

    }

    cout << endl << best;

}
