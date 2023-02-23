#include <iostream>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    int solution = 0;
    solution += ((2 * (n + m)) - 4);
    if(n < 3 || m < 3){
        cout << solution;
        return 0;
    }
    solution += (((n*m) - solution) / 2);
    cout << solution;
}
