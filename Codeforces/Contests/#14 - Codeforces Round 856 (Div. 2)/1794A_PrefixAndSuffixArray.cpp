#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        pair<string, string> pairs[n/2];
        int accesed[n/2] = {0};
        bool isPalind = true;
        for(int i=0; i<(2*n - 2); i++){

            string word; cin >> word;

            if(word.length() > n/2) continue;

            if(accesed[word.length()-1]){
                reverse(word.begin(), word.end());
                if(pairs[word.length()-1].first != word) isPalind = false;
                continue;
            }

            pairs[word.length()-1].first = word;
            accesed[word.length()-1]++;

        }

        cout << (isPalind ? "YES" : "NO") << endl;

    }

}
