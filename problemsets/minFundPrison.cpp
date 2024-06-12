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

vector<vector<ll>> graph;
vector<ll> sizes;
ll const INF = 1e16;
ll n, m, c, mn;

void loadSizes(ll node, ll prev) {
    sizes[node] = 1;
    for (auto& neighbour : graph[node]) {
        if (neighbour == prev) continue;
        loadSizes(neighbour, node);
        sizes[node] += sizes[neighbour];
    }
}

void dfsMin(ll node, ll prev) {
    if (node != prev) {
        ll sz = sizes[node];
        mn = min(mn, sz*sz + (n-sz)*(n-sz));
    }
    for (ll neighbour : graph[node]) {
        if (neighbour == prev) continue;
        dfsMin(neighbour, node);
    }
}



void solve() {
    cin >> n >> m >> c;
    graph.clear();
    graph.resize(n);
    ito(m) {
        ll a, b; cin >> a >> b; a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    sizes.resize(n);
    loadSizes(0, 0);
    mn = INF;
    dfsMin(0, 0);
    cout << mn << '\n';



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




