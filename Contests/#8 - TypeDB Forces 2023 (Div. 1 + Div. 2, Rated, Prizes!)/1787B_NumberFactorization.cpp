#include <iostream>
#include <numeric>
#include<vector>
#include <cmath>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        vector<int> primes;

        while(n%2 == 0)
        {
            primes.push_back(2);
            n = n/2;
        }

        for(int i=3; i<=sqrt(n); i=i+2)
        {
            while (n%i == 0)
            {
                primes.push_back(i);
                n = n/i;
            }
        }

        if(n>2){
            primes.push_back(n);
        }

        cout << accumulate(primes.begin(), primes.end(), 0) << endl;

    }

}
