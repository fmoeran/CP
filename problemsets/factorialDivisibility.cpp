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

mn(500005);

ll x, n, counts[N];


void solve() {
    cin >> n >> x;
    fill(counts, counts+x, 0ll);
    ito(n) {
        ll val; cin >> val;
        counts[val]++;
    }
    for (int i=1; i<x; i++) {
        ll c = counts[i];
        if (c%(i+1) != 0) {
            NO;
            return;
        }
        counts[i+1] += c/(i+1);
    }
    YES;

}


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  //cin >> t;
  while (t--) {
#ifdef ONPC
    cout << "================================================\n";
#endif // ONPC
    solve();
  }

  return 0;
}




