// This is a solution to the problem of finding a possible
// arrangement of N queens on an NxN chessboard, where no
// queen is in a direct path of another queen.

// Wikipedia page on the problem: https://en.wikipedia.org/wiki/Eight_queens_puzzle

// The problem is solved with backtracking, which is implemented using recursion.

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(int& n, vector<int>& board, int depth){

    int indexOfPlaced = board[depth];

    for(int i=0; i<depth; i++){
        if( board[i] == indexOfPlaced ) return false;
    }

    // Checking upper left diagonal
    for(int i=1; i<=indexOfPlaced && i<=depth; i++){

        if( board[depth-i] == indexOfPlaced-i ) return false;

    }

    //Checking upper right diagonal
    for(int i=1; i<=(n-indexOfPlaced-1) && i<=depth; i++){

        if( board[depth-i] == indexOfPlaced+i ) return false;

    }

    return true;

}

pair<int, vector<int>> findArrangement(int& n, vector<int>& board, int depth){

    for(int i=0; i<n; i++){

        board[depth] = i;

        if( isPossible(n, board, depth) ){

            if( depth == (n-1) )  return make_pair(true, board);

            if( findArrangement(n, board, depth+1).first ) return make_pair(true, board);

        }

    }

    return make_pair(false, board);

}


int main(){

    cout << "Generate a possible board for N queens on a NxN chessboard, where no two queens are in each others paths\n";
    cout << "Enter the value of N: ";

    int n;
    cin >> n;
    vector<int> board(n);
    pair<int, vector<int>> solution;

    solution = findArrangement(n, board, 0);

    if( solution.first ){

        cout << "Solution:\n";
        for(int i=0; i<n; i++) cout << solution.second[i] << endl;

    }else{

        cout << "No solution was found";

    }

}
