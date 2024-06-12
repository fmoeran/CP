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

ll n, m;

void solve() {
    ll out = 0;
    cin >> n >> m;

    for (ll b=1; b<=m; b++) {

        for (ll a=b; a<=n; a+=b) {
            if ((a+b)%(b*__gcd(a, b)) == 0) {
                out += 1;
            }
        }

    }
    cout << out << '\n';
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




