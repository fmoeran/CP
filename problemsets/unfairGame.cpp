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

int a, b, c, d;

void solve() {
    cin >> a >> b >> c >> d;
    int total = d/2;
    while (a>0 && b>0 && c>0) {
        if (a%2 == b%2 && b%2 == c%2) {
            total++;
            if (a>=b && a>=c) a--;
            else if (b>=c) b--;
            else c--;
        }else {
            if (a%2 == b%2) c--;
            else if (a%2 == c%2) b--;
            else a--;
        }
    }
    total += a/2 + b/2 + c/2;
    cout << total << '\n';
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




