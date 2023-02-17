#include <iostream>

using namespace std;

int main(){

    int total, enough;
    cin >> total >> enough;
    int half_candles = 0;
    int solution = 0;
    while(total != 0){
        solution += total;
        half_candles += total;
        total = half_candles/enough;
        half_candles = half_candles%enough;
    }
    cout << solution;
}
