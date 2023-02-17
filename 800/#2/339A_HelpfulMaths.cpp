#include <iostream>
#include <string>

int main(){

    int solution = 0;

    int n;
    std::cin >> n;

    std::string stones;
    std::cin >> stones;

    for(int i=1; i<n; i++){
        if(stones[i-1] == stones[i]){
            solution++;
        }
    }

    std::cout << solution;

}
