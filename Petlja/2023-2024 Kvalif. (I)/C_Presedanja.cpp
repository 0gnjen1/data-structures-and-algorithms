// NOTE: Zadatak uradjen za 95 poena

#include <bits/stdc++.h>

using namespace std;

void bfs_search(queue<int>& que, vector<int>& cost, vector<vector<int>>& graph, int destination){

    int current = que.front();

    for(auto const bridge : graph[current]){
        for(auto const available : graph[bridge]){
            if(cost[available] != -1) continue;
            cost[available] = cost[current]+1;
            que.push(available);
        }
    }

    if(cost[destination] != -1) return;

    que.pop();
    bfs_search(que, cost, graph, destination);

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vrtx, edge, start, dest;
    cin >> vrtx >> edge >> start >> dest;

    vector<vector<int>> grph (vrtx+1);
    for(int i=0; i<edge; i++){
        int x, y; cin >> x >> y;
        grph[x].push_back(y);
        grph[y].push_back(x);
    }

    queue<int> q;
    q.push(start);
    vector<int> cst (vrtx+1, -1);
    cst[start] = 0;

    bfs_search(q, cst, grph, dest);

    cout << cst[dest];

}
