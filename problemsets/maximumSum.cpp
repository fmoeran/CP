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

const ll M = 1e9 + 7;

mn(2e5+2);

int n, k;
ll a[N];

ll binpow(ll x, ll y) {
    if (y == 1) return x;
    ll res = binpow(x, y/2);
    res = (res * res) % M;
    if (y%2 == 1) res = (res * x) % M;
    return res;
}



void solve() {
    cin >> n >> k;
    ito(n) cin >> a[i];

    // GET MAX

    ll mx = 0, curr = 0;
    ito(n) {
        curr = max(curr + a[i], 0ll);
        mx = max(mx, curr);
    }

    ll total = accumulate(a, a+n, 0ll) - mx;
    ll addition = (mx * binpow(2, k))%M;
    ll out = (total + addition)%M;
    if (out < 0) out += M;
    cout << out << '\n';
    }


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
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


