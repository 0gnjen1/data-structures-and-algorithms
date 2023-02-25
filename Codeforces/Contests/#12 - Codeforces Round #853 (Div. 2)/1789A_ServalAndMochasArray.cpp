#include <iostream>
#include <vector>

using namespace std;

int gcd(int u, int v)
{
    return (v != 0) ? gcd(v, u % v) : u;
}

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        vector<int> numbers(n);
        for(int i=0; i<n; i++){

            int num; cin >> num;
            numbers[i] = num;

        }

        bool is_possible = false;

        for(int i=0; i<n; i++){

            for(int j=0; j<n; j++){

                if(i==j) continue;

                int the_gcd = gcd(numbers[i], numbers[j]);
                //cout << "calculating gcd for " << numbers[i] << " and " << numbers[j] << " gives " << the_gcd << endl;
                if(the_gcd == 1 || the_gcd == 2){

                    is_possible = true;
                    break;

                }


            }

            if(is_possible) break;

        }

        if(is_possible){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }

    }

}
