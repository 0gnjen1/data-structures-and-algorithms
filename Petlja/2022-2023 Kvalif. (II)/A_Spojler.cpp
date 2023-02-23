#include <iostream>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;
    int x, y;
    cin >> x >> y;

    if(a == x && b == y){
        cout << "nijedan";
        return 0;
    }
    if(x < a && b == y){
        cout << "prvi";
        return 0;
    }
    if(y < b && a == x){
        cout << "drugi";
        return 0;
    }
    cout << "?";
}
