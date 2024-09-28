#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

int main(){
    IOS;
    int n; // number of nodes
    int m; // number of edges

    cin >> n >> m;

    vector<vector<int>> path(n, vector<int>(n, INT_MAX)); // path[i][j]: the distance between node i and node j
    vector<int> dis(n, INT_MAX); // dis[i]: the shortest distance between start node and node i
    vector<bool> vis(n, false); // vis[i]: whether node i is visited

    for(int i = 0;i < m;i++){
        int a, b, d;
        cin >> a >> b >> d;
        path[a - 1][b - 1] = d;
        path[b - 1][a - 1] = d; // if the graph is undirected
    }

    // initialization
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // min heap
    pq.push({0, 0});

    // dijkstra
    while(!pq.empty()){
        auto [d, u] = pq.top();
        pq.pop();
        if(vis[u]) continue;
        vis[u] = true;
        dis[u] = d;
        for(int v = 0;v < n;v++){
            if(path[u][v] != INT_MAX && !vis[v]){ // relax
                pq.push({d + path[u][v], v});
            }
        }
    }

    // the distance between start node (node 0) and other nodes
    for(int i = 1;i < n;i++){
        cout << "node " << i << ": " << dis[i] << endl;
    }
    return 0;
}