#include <bits/stdc++.h>
using namespace std;

int64_t calc_score(vector<int>& arr){
    int64_t score = 0;
  	for(int i=0; i<arr.size(); i++){
        if(arr[i]==(i+1)) score++;
    }
    return score;
}

int main(){

   	int t; cin >> t;
   	while(t--){
   		int n, k, d; cin >> n >> k >> d;
   		vector<int> a (n);
   		for(auto& x : a) cin >> x;
   		vector<int> v (k);
   		for(auto& x : v) cin >> x;
   		int64_t ans = 0;
   		for(int cnt=0; cnt<min(n*2, d); cnt++){
            int64_t score = calc_score(a);
            ans = max(ans, score+(int64_t)((d-cnt-1)/2));
            for(int i=0; i<v[cnt%k]; i++) a[i] += 1;
        }
        cout << ans << '\n';
    }

}
