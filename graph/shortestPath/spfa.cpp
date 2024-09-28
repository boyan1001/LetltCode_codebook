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

    for(int i = 0;i < m;i++){
        int a, b, d;
        cin >> a >> b >> d;
        path[a - 1][b - 1] = d;
    }

    // initialization
    queue<int> q;
    q.push(0);
    dis[0] = 0;

    // spfa
    while(!q.empty()){
        int now = q.front();
        q.pop();

        for(int i = 0;i < n;i++){
            if(dis[now] + path[now][i] < dis[i] && path[now][i] != INT_MAX){
                dis[i] = dis[now] + path[now][i];
                q.push(i);
            }
        }
    }

    // the distance between start node (node 0) and other nodes
    for(int i = 1;i < n;i++){
        cout << "node " << i << ": " << dis[i] << endl;
    }
    return 0;
}