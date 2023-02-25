#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        string binstr; cin >> binstr;
        vector<int> inequalities;
        for(int i=0; i<n/2; i++){
            if( binstr[i] != binstr[n-i-1] ) inequalities.push_back(i);
        }

        if( inequalities.size() < 2 ){
            cout << "Yes" << endl;
            continue;
        }

        bool should_print = true;
        for(int i=0; i<inequalities.size()-1; i++){

            if( (inequalities[i+1] - inequalities[i]) > 1 ){
                cout << "No" << endl;
                should_print = false;
                break;
            }

        }

        if(should_print) cout << "Yes" << endl;

    }

}
