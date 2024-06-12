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

mn(2e5+1);

const ll MOD = 1e9+7;
ll n, k, a[N];

ll getMaxSum() {
    ll out = 0;
    ll current = 0;
    ito(n) {
        current = max(0LL, (current + a[i]));
        out = max(current, out);
    }
    return out;
}

ll binPow(ll x, ll y) {
    if (y == 0) return 1;
    ll out = binPow( x, y/2);
    out = (out * out)%MOD;
    if (y%2 == 1) out = (out * x) % MOD;
    return out;
}


void solve() {
    cin >> n >> k;
    ito(n) cin >> a[i];

    ll sum = getMaxSum() % MOD;

    ll power =  binPow(2, k);
    ll total = (sum * power) %MOD;
    total += accumulate(a, a+n, 0LL) % MOD;
    total -= sum;


    cout << (total%MOD+MOD)%MOD << '\n';


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




