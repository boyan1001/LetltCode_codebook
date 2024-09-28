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

    vector<tuple<int, int, int>> edges; // edges[i]: {a, b, d}, edge from node a to node b with distance d
    vector<ll> dis(n, INT_MAX); // dis[i]: the shortest distance between start node and node i

    for(int i = 0;i < m;i++){
        int a, b, d;
        cin >> a >> b >> d;
        edges.pb({a, b, d});
        edges.pb({b, a, d}); // if the graph is undirected
    }

    // Initialization
    dis[0] = 0;

    // Bellman-Ford algorithm
    for(int i = 0;i < n;i++){
        bool check = false;
        for(auto &e: edges){
            int a, b, d;
            tie(a, b, d) = e;
            if(dis[a - 1] + d < dis[b - 1]){
                dis[b - 1] = dis[a - 1] + d;
                check = true;
            }
        }
        if(!check)break;
    }

    // the distance between start node (node 0) and other nodes
    for(int i = 1;i < n;i++){
        cout << "node " << i << ": " << dis[i] << endl;
    }
    return 0;
}