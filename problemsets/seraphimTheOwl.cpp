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

mn(200001);
ll n, m, a[N], b[N];


void solve() {
    cin >> n >> m;
    ito(n) cin >> a[i];
    ito(n) cin >> b[i];
    ll total = 0;
    for (int i=n-1; i>=m; i--) {
        total += min(a[i], b[i]);
    }
    ll best = total + a[m-1];

    for (int i=m-1; i>=0; i--) {
        best = min(best, total+a[i]);
        total += min(a[i], b[i]);
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




