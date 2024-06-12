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

vector<vector<ll>> river;
vector<ll> mn;
ll n, m, k, d;

ll getMin(ll row) {
    vector<ll> cost(m, 0);
    multiset<ll> ms;
    cost[0] = 1; ms.insert(cost[0]);
    for (int i=1; i<=d+1; i++) {
        cost[i] = 1 + river[row][i] + cost[0];
        ms.insert(cost[i]);
    }
    for (int i=d+2; i<m; i++) {
        ms.erase(ms.find(cost[i-d-2]));
        ll mn = *ms.begin();
        cost[i] = 1 + river[row][i] + mn;
        ms.insert(cost[i]);
    }
    return cost[m-1];
}

void solve() {
    cin >> n >> m >> k >> d;

    mn = vector<ll>(n);
    river = vector<vector<ll>>(n, vector<ll>(m));
    ito(n) jto(m) cin >> river[i][j];

    if (d+1 >= m) {
        cout << 2 * k << '\n';
        return;
    }

    ito(n) mn[i] = getMin(i);

    ll best = 0, current = 0;
    ito(k) current += mn[i];
    best = current;
    for(int i=k; i<n; i++) {
        current += mn[i] - mn[i-k];
        best = min(best, current);
    }
    cout << best << '\n';

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




