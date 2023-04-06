#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n, s1, s2; cin >> n >> s1 >> s2;
        vector<pair<int, int>> reqs (n);
        for(int i=0; i<n; i++){
            cin >> reqs[i].first;
            reqs[i].second = i+1;
        }
        sort(reqs.begin(), reqs. end());
        reverse(reqs.begin(), reqs.end());

        vector<int> where;
        int fits = max(s1, s2)/min(s1,s2);

        int smallsum = fits * min(s1, s2);
        for(int i=0; i<fits; i++) where.push_back(0);

        int bigsum = max(s1, s2);
        where.push_back(1);

        while(where.size() <= n){

            for(int i=0; i<(bigsum+max(s1, s2)-smallsum)/min(s1, s2); i++){
                where.push_back(0);

            }

            smallsum += ((bigsum+max(s1, s2)-smallsum)/min(s1, s2)) * min(s1, s2);

            where.push_back(1);
            bigsum += max(s1, s2);

        }

        vector<int> ans1;
        vector<int> ans2;
        bool s1bigger = s1>s2;

        for(int i=0; i<n; i++){

            if(s1bigger){
                if(where[i]) ans1.push_back(reqs[i].second);
                else ans2.push_back(reqs[i].second);
                continue;
            }

            if(where[i]) ans2.push_back(reqs[i].second);
            else ans1.push_back(reqs[i].second);

        }

        cout << ans1.size() << " ";
        for(int i=0; i<ans1.size(); i++){
            cout << ans1[i] << " ";
        }
        cout << endl;
        cout << ans2.size() << " ";
        for(int i=0; i<ans2.size(); i++){
            cout << ans2[i] << " ";
        }
        cout << endl;

    }

}
