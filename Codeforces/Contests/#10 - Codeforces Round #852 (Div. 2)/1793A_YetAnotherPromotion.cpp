#include <iostream>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int64_t price_a, price_b;
        cin >> price_a >> price_b;

        int64_t needed, m;
        cin >> needed >> m;

        int64_t solution = 0;
        if(price_a*m < price_b*(m+1)){

                solution = price_a*m*(needed / (m+1));
                needed %= m+1;

                if(price_a<price_b){
                    solution += price_a * needed;

                }else{
                    solution += price_b * needed;
                }

        }else{

            solution += price_b * needed;

        }

        cout << solution << endl;

    }

}
