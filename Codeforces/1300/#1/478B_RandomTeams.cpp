#include <iostream>

using namespace std;

int64_t sumgroup(int64_t n){
     return (n * (n + 1) / 2);
}

int main(){

    int64_t n, m; cin >> n >> m;

    int64_t mini = ( m - (n%m) ) * sumgroup( (n/m)-1 ) + (n%m) * sumgroup( n/m );
    n -= (m-1);
    int64_t maxi = sumgroup(n-1);

    cout << mini << " " << maxi;

}
