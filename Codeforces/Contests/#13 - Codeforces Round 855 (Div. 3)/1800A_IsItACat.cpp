#include <iostream>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        string sound; cin >> sound;
        for(auto& c : sound) c = tolower(c);
        bool isCat = true;
        string found = "aaaa";
        found [0] = sound[0];
        int index = 1;

        for(int i=1; i<n; i++){

            if(sound[i] != sound[i-1]){

                if(index > 4) break;
                found[index] = sound[i];
                index++;

            }

        }

        if(index != 4){

            cout << "NO" << endl;
            continue;

        }

        if(found == "meow"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

}
