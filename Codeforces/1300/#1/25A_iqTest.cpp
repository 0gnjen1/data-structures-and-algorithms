#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int last_odd = -1;
    int num_of_odds = 0;
    int last_even = -1;
    int num_of_evens = 0;
    for(int i=0; i<n; i++){

        int number;
        cin >> number;

        if(number%2){
            num_of_odds++;
            last_odd = i;
        }else{
            num_of_evens++;
            last_even = i;
        }

        if(num_of_evens > 1 && last_odd != -1){
        cout << last_odd+1;
        break;
        }

        if(num_of_odds > 1 && last_even != -1){
        cout << last_even+1;
        break;
        }

    }

}
