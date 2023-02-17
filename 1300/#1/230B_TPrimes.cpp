#include <iostream>
#include <set>
using namespace std;

const int limit = 1000001;

int main(){

    bool primes[limit];
    for(int i=2; i<limit; i++) primes[i] = true;

    set<int64_t> tprimes;

    for(int i=2; i*i<limit; i++){
        if(primes[i]){
            for(int j=i+i; j<limit; j+=i) primes[j] = false;
        }
    }

    for(int i=2; i<limit; i++){
        if(primes[i]) tprimes.insert((int64_t)i*i);
    }

    int n;
    cin >> n;
    for(int i=0; i<n; i++){

        int64_t x; cin >> x;
        if(tprimes.find(x) != tprimes.end()) cout << "YES\n";
        else cout << "NO\n";

    }

}
