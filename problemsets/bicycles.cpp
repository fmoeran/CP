#include <cmath>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <ios>
#include <iostream>
#include <iterator>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <tuple>
#include <unordered_map>
#include <unordered_set>


using namespace std;

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define loop(n)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

mn(1001);
int n, m, s[N], best, seenCount;
vector<vector<pair<int, int>>> graph;
int seen[N*N];
bool searching[N*N];

int hsh(int node, int speed) {
  return node * N + speed;
}


void search(int root, int speed) {
  if (seen[hsh(root, speed)] != -1) return;
  if (root == n-1) {
    seen[hsh(root, speed)] = 0;
    return;
  }
  searching[hsh(root, speed)] = true;
  int out = 99999999;

  for (pair<int, int> p : graph[root]) {
    int neighbour=p.first, weight=p.second, newSpeed = min(speed, s[neighbour]);
    if (searching[hsh(neighbour, newSpeed)]) continue;
    search(neighbour, newSpeed);
    out = min(out, weight * speed + seen[hsh(neighbour, newSpeed)]);
  }
  seen[hsh(root, speed)] = out;
  searching[hsh(root, speed)] = false;
}

void solve() {
  cin >> n >> m;
  graph = vector<vector<pair<int, int>>>(n);
  ito(m) {
    int u, v, w;
    cin >> u >> v >> w;
    u--; v--;
    graph[u].push_back(make_pair(v, w));
    graph[v].push_back(make_pair(u, w));
  }

  ito(n) cin >> s[i];
  fill(seen, seen+N*N, -1);
  fill(searching, searching+N*N, false);
  search(0, s[0]);
  best = seen[hsh(0, s[0])];
  cout << best << '\n';
}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t=1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}





