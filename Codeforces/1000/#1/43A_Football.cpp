#include <iostream>
#include <unordered_map>
#include <typeinfo>
#include <string>
using namespace std;

int main(){

    int n;
    cin >> n;
    unordered_map<string, int> scores;
    string team;
    for(int i=0; i<n; i++){
        cin >> team;
        scores[team]++;
    }

    int maxi = 0;
    string solution;
    for(const auto& entry: scores){
        if(maxi < entry.second){
            maxi = entry.second;
            solution = entry.first;
        }
    }

    cout << solution;

}
