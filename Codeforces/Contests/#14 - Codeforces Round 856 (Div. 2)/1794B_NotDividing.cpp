#include <iostream>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int numbers[n];
        for(int i=0; i<n; i++){

            int number; cin >> number;
            if( !(number % 2) ) number++;
            numbers[i] = number;

        }

        for(int i=(n-1); i>0; i--){

            while( !(numbers[i] % numbers[i-1]) ){
                numbers[i-1]++;
            }

        }

        for(int i=0; i<n; i++) cout << numbers[i] << " ";
        cout << endl;
    }

}
