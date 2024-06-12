#include<bits/stdc++.h>


using namespace std;

#define ll long long
#define mn(x) const ll N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define loop(n)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

struct Edge {
    int node;
    int colour;

    Edge(): node(0), colour(0) {}
    Edge(int n, int c): node(n), colour(c) {}
};


const int N=2e5+1, M=2e5+1, C=2e5+1;



void solve() {
    vector<vector<Edge>> graph;
    int n, m, b, e;
    cin >> n >> m;

    graph = vector<vector<Edge>>(n, vector<Edge>(0));

    ito(m) {
        int u, v, c;
        cin >> u >> v >> c;
        u--; v--; c--;
        graph[u].emplace_back(v, c);
        graph[v].emplace_back(u, c);
    }

    cin >> b >> e;
    b--; e--;

    if (b == e) {
        cout << 0 << '\n';
        return;
    }

    //       node col
    set<pair<int, int>> seen;
    //                 dist   node  col
    priority_queue<array<int, 3>, vector<array<int, 3>>, greater<array<int, 3>>> pq;

    for (Edge edge : graph[b]) {
        seen.emplace(b, edge.colour);
        pq.push({1, b, edge.colour});
    }

    while (!pq.empty()) {
        auto tup = pq.top();
        pq.pop();
        int dist=tup[0], node=tup[1], colour=tup[2];

        cout << node << ' ' << colour << ' ' << dist << '\n';

        if (node == e) {
            cout << dist << '\n';
            return;
        }

        for (Edge edge : graph[node]) {
            int newNode=edge.node, newColour=edge.colour;
            if (seen.find(make_pair(newNode, newColour)) != seen.end()) {
                continue;
            }
            int newDist = dist + (int)(newColour != colour);
            cout << newNode << ' ' << newDist << ',' << ' ';
            seen.emplace(newNode, newColour);
            pq.push({newDist, newNode, newColour});
        }
    }





}


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  cin >> t;
  while (t--) {
#ifdef ONPC
    cout << "================================================\n";
#endif // ONPC
    solve();
  }

  return 0;
}




