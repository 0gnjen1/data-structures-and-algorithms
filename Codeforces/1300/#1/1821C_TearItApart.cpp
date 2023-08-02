#include <bits/stdc++.h>
using namespace std;

int calcLongestSubstring(string s, int i){
    int longest = 0;
    for(int j=0; j<s.length(); j++){
        if(s[j] != i){
            int len = 1;
            while((s[j+len] != i) && ((j+len)<s.length())){
                len++;
            }
            j += len;
            longest = max(longest, len);
        }
    }
    return longest;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int mini = 1e6;
        int maxi = 0;
        for(int i=97; i<123; i++){
            int maxi = calcLongestSubstring(s, i);
            mini = min(mini, maxi);
        }
        if(!mini){
            cout << 0 << "\n";
            continue;
        }
        cout << floor(log2(mini))+1 << "\n";
    }
}
