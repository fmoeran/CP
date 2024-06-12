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

const ll M = 998244353;

mn(5005);

ll n, a[N], totals[N], additions[N];

ll add(ll a, ll b) {
    return (a+b)%M;
}

ll mul(ll a, ll b) {
    return (a*b)%M;
}

void solve() {
    cin >> n;
    ito(n) cin >> a[i];

    sort(a, a+n);

    fill(totals, totals+N, 0ll);

    totals[0] = 1;

    ll out = 0;

    ito(n) {
        fill(additions, additions+N, 0ll);
        ll val = a[i];
        jto(N) {
            if (!totals[j]) continue;
            additions[val+j] = add(additions[val+j], totals[j]);
            if (j < val) {
                out = add(out, mul(val, totals[j]));
            }else {
                out = add(out, mul((val + j+1)/2, totals[j]));
            }
        }
        jto(N) totals[j] = add(totals[j], additions[j]);

    }

    cout << out << '\n';




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




