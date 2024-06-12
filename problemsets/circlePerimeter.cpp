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

ll ceilSqrt(ll x) {
    ll out = 0;
    for (ll dif=1ll<<31; dif>0; dif>>=1) {

        ll next = out^dif;
        if (next*next<=x) out = next;
    }
    if (out*out < x) out++;
    return out;
}

void solve() {
    ll r; cin >> r;
    ll out = 0;

    for (ll x=1; x<=r; x++) {
        ll upper = ceilSqrt((r+1)*(r+1) - x*x);
        ll lower = ceilSqrt(r*r - x*x);
        out += (upper - lower);
    }
    cout << out*4 << '\n';

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




