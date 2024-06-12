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

void solve() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    if ((a[0]+a[1]+a[2])%2==1) {
        cout << -1 << '\n';
        return;
    }
    int total = 0;
    while (a[1] > 0) {

        a[1]--;
        a[2]--;
        total++;
        sort(a, a+3);
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




