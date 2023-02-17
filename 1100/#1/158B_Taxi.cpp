#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int one_group = 0;
    int two_group = 0;
    int three_group = 0;
    int four_group = 0;
    for(int i=0; i<n; i++){

        int number;
        cin >> number;

        if(number==1) one_group++;
        else if(number==2) two_group++;
        else if(number==3) three_group++;
        else four_group++;

    }

    int solution = four_group;
    solution += min(one_group, three_group);
    int temp = min(one_group, three_group);
    one_group -= temp;
    three_group -= temp;
    solution += two_group/2;

    if(one_group != 0){
        solution += one_group/4;
        int left = ((two_group%2)*2 + one_group%4);
        solution += left/4;
        if(left%4) solution++;
    }
    else solution += three_group + two_group%2;

    cout << solution;

}
