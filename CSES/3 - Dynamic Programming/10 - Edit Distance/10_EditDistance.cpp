#include <bits/stdc++.h>

using namespace std;

int main(){

    string str1; cin >> str1;
    string str2; cin >> str2;

    vector<vector<int>> grid (str1.length()+1, vector<int> (str2.length()+1, 0));

    for(int i=0; i<(str1.length()+1); i++) grid[i][0] = i;
    for(int j=0; j<(str2.length()+1); j++) grid[0][j] = j;

    for(int i=1; i<(str1.length()+1); i++){

        for(int j=1; j<(str2.length()+1); j++){

            if(str1[i-1] == str2[j-1]){
                grid[i][j] = grid[i-1][j-1];
                continue;
            }

            grid[i][j] = min(min(grid[i-1][j], grid[i][j-1]), grid[i-1][j-1]) + 1;

        }

    }

    cout << grid[str1.length()][str2.length()] << endl;

}
