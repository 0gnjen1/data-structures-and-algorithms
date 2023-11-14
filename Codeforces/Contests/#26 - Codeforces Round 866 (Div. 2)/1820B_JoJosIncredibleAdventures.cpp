#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        string s; cin >> s;
        int maxi = 0;

        if(s.length() == 1){
            cout << (s[0] == '1' ? 1 : 0) << endl;
            continue;
        }

        int i = 0;
        while(s[i] == '1') i++;

        if(i == s.length()){
            cout << (int64_t)s.length()*(int64_t)s.length() << endl;
            continue;
        }

        int j = s.length()-1;
        int k = 0;
        while(s[j] == '1'){j--; k++;}

        maxi = i+k;

        for(int i=0; i<s.length(); i++){
            int cnt = 0;
            if(s[i] == '1'){
                while(i < s.length() && s[i] == '1'){
                    cnt++;
                    i++;
                }
            }
            maxi = max(maxi, cnt);
        }

        if(maxi == 1){
            cout << 1 << endl;
            continue;
        }

        int64_t ans = 0;

        for(int i=1; i<maxi+1; i++){
            ans = max(ans, (int64_t)(maxi+1-i)*(int64_t)i);
        }

        cout << ans << endl;

    }

}
