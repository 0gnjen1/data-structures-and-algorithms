#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){

    int n;
    cin >> n;
    unordered_map<string, int> umap;
    for(int i=0; i<n; i++){
        string username;
        cin >> username;
        if(umap[username] == 0){
            cout << "OK" << endl;
        }else{
            cout << username << to_string(umap[username]) << endl;
        }
        umap[username]++;
    }

}
