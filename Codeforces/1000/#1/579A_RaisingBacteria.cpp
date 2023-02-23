#include <iostream>
#include <bitset>

using namespace std;

int main(){

    unsigned long int num;
    cin >> num;
    bitset<32> the_bits(num);
    //int solution = 0;
    //for(int i=0; i!=32; i++){
    //    if(the_bits[i]) solution++;
    //}
    //cout << solution;
    cout << the_bits.count();
}
