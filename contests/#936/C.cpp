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

vector<vector<int>> graph;
int n, k, searchK;

int searchMax(int x, int node, int prev) {
    int total = 1;
    for (int child : graph[node]) {
        if (child == prev) continue;
        int subTotal = searchMax(x, child, node);
        if (subTotal >= x && searchK < k) searchK++;
        else total += subTotal;
    }
    return total;
}


bool canMake(int x) {
    searchK = 0;
    if (searchMax(x, 0, 0) < x) return false;
    else return searchK >= k;
}



void solve() {
    cin >> n >> k;
    graph = vector<vector<int>>(n);
    ito(n-1) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int l=1, h=n;
    while (l+1 < h) {
        int mid = (l+h)/2;
        if (canMake(mid)) l = mid;
        else h = mid;
    }
    cout << l << '\n';



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




