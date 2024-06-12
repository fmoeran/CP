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

mn(101);
int a[N], b[N], n;

void solve() {
    cin >> n;
    ito(n) cin >> a[i];
    ito(n) cin >> b[i];

    int mx = 0;

    ito(n) {
        int dif = n-i;
        jto(n-i) {
            if (a[i] <= b[i+j]) {
                dif = j;
                break;
            }
        }
        mx = max(mx, dif);
    }
    cout << mx << '\n';
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




