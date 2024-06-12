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

const ll MAX_NUM=1e6+2;


int n, m, k, a[N], b[N], available[MAX_NUM];






void solve() {
    cin >> n >> m >> k;

    ito(n) {
        cin >> a[i];
        available[a[i]] = 0;
    }
    ito(m) {
        cin >> b[i];
        available[b[i]] = 0;
        }

    sort(b, b+m);

    int l=0, r=m-1;
    int inside = 0, out=0;

    ito(m) available[b[i]]++;
    ito(m) {
        if (available[a[i]] > 0) inside++;
        available[a[i]]--;
    }
    out += (inside >= k);

    for(; r<n-1; r++, l++) {
        available[a[l]]++;
        if (available[a[l]] > 0) inside--;
        available[a[r+1]]--;
        if (available[a[r+1]] >= 0) inside++;
        out += (inside >= k);
    }

    cout <<  out << '\n';
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




