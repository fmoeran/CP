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
ll n, k;
ll a[N];

void solve() {
    cin >> n >> k;
    ito(n) cin >> a[i];
    sort(a, a+n);
    ll mn = a[0];
    ll cnt = 1;
    for (int i=1; i<n; i++) {
        if ((a[i]-mn)*cnt <= k) {
            k -= cnt * (a[i]-mn);
            mn = a[i];

            cnt++;
        }else {
            mn += k/cnt;
            cnt -= k%cnt;
            k = 0;
        }
    }
    if (k>0) {
        mn  += k/cnt;
        cnt -= k%cnt;
    }

    cout << 1 + n * (mn-1) + n - cnt << '\n';

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




