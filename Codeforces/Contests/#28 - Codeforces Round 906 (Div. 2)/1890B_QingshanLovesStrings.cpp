#include <bits/stdc++.h>

using namespace std;

bool isGood(string str){
    for(int i=0; i<str.size()-1; i++){
        if(str[i] == str[i+1]) return false;
    }
    return true;
}

pair<bool, int> isPossible(string str){
    bool zeropair = false;
    bool onepair = false;
    for(int i=0; i<str.size()-1; i++){
        if(str[i] == str[i+1]){
            if(str[i] == '0') zeropair = true;
            if(str[i] == '1') onepair = true;
        }
        if(zeropair && onepair) return make_pair(false, -1);
    }
    int which = 0;
    if(onepair) which = 1;
    return make_pair(true, which);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){

        int N, M; cin >> N >> M;
        string Nstring; cin >> Nstring;
        string Mstring; cin >> Mstring;

        bool isNgood = isGood(Nstring);
        if(isNgood){
            cout << "yes\n";
            continue;
        }

        pair<bool, int> possible = isPossible(Nstring);
        if(!possible.first){
            cout << "no\n";
            continue;
        }

        bool isMgood = isGood(Mstring);
        if(!isMgood){
            cout << "no\n";
            continue;
        }

        if((Mstring[0] == Mstring[Mstring.size()-1]) && ((int)Mstring[0]-48 != possible.second)){
            cout << "yes\n";
            continue;
        }

        cout << "no\n";

    }

}
