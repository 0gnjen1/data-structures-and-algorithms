#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int t; cin >> t;
    while(t--)
    {

        int n, m; cin >> n >> m;
        string tower_one, tower_two;
        cin >> tower_one >> tower_two;
        reverse(tower_two.begin(), tower_two.end());
        tower_one = tower_one.append(tower_two);

        //cout << endl << tower_one << endl;

        bool isSolved = false;

        int doubles_found = 0;
        for(int i=1; i<n+m; i++){

            if(tower_one[i-1] == tower_one[i]){

                doubles_found++;

                if(tower_one[i] == tower_one[i+1] || doubles_found > 1){

                    cout << "NO" << endl;
                    isSolved = true;
                    break;

                }

            }

        }

        if(!isSolved) cout << "YES" << endl;

    }

}
