// NOTE: Zadatak uradjen za 10 poena

#include <bits/stdc++.h>

using namespace std;

pair<bool, int64_t> dfs_search(int index, int64_t army_size, vector<int>& multiply, vector<int>& add, vector<int>& lower, vector<int>& upper){

    int64_t when_mul = army_size*(int64_t)multiply[index];
    int64_t when_add = army_size+(int64_t)add[index];

    bool mul_possible = false;
    if(when_mul>=(int64_t)lower[index] && when_mul<=(int64_t)upper[index]) mul_possible = true;
    bool add_possible = false;
    if(when_add>=(int64_t)lower[index] && when_add<=(int64_t)upper[index]) add_possible = true;

    if(!mul_possible && !add_possible) return make_pair(false, 0);

    if(index==multiply.size()-1){
        if(mul_possible && add_possible) return make_pair(true, max(when_mul, when_add));
        if(mul_possible) return make_pair(true, when_mul);
        return make_pair(true, when_add);
    }

    pair<bool, int64_t> possibility1 = make_pair(false, 0);
    if(mul_possible) possibility1 = dfs_search(index+1, when_mul, multiply, add, lower, upper);
    pair<bool, int64_t> possibility2 = make_pair(false, 0);
    if(add_possible) possibility2 = dfs_search(index+1, when_add, multiply, add, lower, upper);

    if(!possibility1.first && !possibility2.first) return make_pair(false, 0);

    if(possibility1.first && possibility2.first) return make_pair(true, max(possibility1.second, possibility2.second));
    if(possibility1.first) return make_pair(true, possibility1.second);
    if(possibility2.first) return make_pair(true, possibility2.second);

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){

        int64_t n, s; cin >> n >> s;
        vector<int> mul (n);
        for(int& m : mul) cin >> m;
        vector<int> ad (n);
        for(int& a : ad) cin >> a;
        vector<int> low (n);
        for(int& l : low) cin >> l;
        vector<int> upp (n);
        for(int& u : upp) cin >> u;

        pair<bool, int64_t> ans = dfs_search(0, s, mul, ad, low, upp);
        if(ans.first){
            cout << ans.second << '\n';
            continue;
        }
        cout << "nemoguce\n";

    }

}
