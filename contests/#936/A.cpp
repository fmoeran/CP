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

mn(1e5+1);

int n, a[N];

void solve() {
    cin >> n;
    ito(n) cin >> a[i];

    sort(a, a+n);

    int ind = (n+1)/2 - 1;

    int total = 1;
    for (int i=ind+1; i<n; i++, total++) {
        if (a[i] != a[ind]) break;
    }
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




