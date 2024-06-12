#include<bits/stdc++.h>


using namespace std;

#define ll long long
#define ull unsigned long long
#define mn(x) const ll N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define loop(n)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ull x, m;

void solve() {
    cin >>  x >> m;

    if (m <= x) {
        cout << 2 << '\n';
        cout << x << ' ' << m << '\n';
        return;
    }

    ull x1 = x, m1 = m;
    while (x1 > 0) {
        x1 >>= 1;
        m1 >>= 1;
    }
    if (m1 > 0) {
        cout << -1 << '\n';
        return;
    }
    cout << 2 << '\n';

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




