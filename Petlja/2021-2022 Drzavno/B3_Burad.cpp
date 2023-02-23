#include <iostream>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int burici[n];
    for(int i=0; i<n; i++) cin >> burici[i];

    int solution = 0;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        if(a == b){
            if(burici[a-1] < 1) solution++;
            burici[a-1]--;
            continue;
        }
        for(int j = (a-1); j < b; j++){
            burici[j]--;
        }
    }

    int mini = burici[0];
    for (int i = 0; i < n; i++){
        if (mini > burici[i]) mini = burici[i];
    }

    if(mini >= 0){
        cout << 0;
        return 0;
    }
    cout << abs(mini);

}
