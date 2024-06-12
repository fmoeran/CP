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
#define int ll


const int INF = 1e9+10;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), d(m), f(k);

    ito(n) cin >> a[i];
    ito(m) cin >> d[i];
    ito(k) cin >> f[i];

    sort(d.begin(), d.end());
    sort(f.begin(), f.end());

    int ind=0, mn = 0, cnt=0;

    ito(n-1) {
        int dif = a[i+1] - a[i];
        if (dif > mn) {
            ind = i;
            mn = dif;
            cnt=1;
        }else if (dif == mn) {
            cnt++;
        }
    }

    if (cnt > 1) {
        cout << mn << '\n';
        return;
    }

    int l = a[ind], r = a[ind+1];


    ito(m) {
        int aim = (l+r)/2 - d[i];
        int start = distance(f.begin(), upper_bound(f.begin(), f.end(), aim))-1;
        start = max(0ll, start);
        for (int j=start; j<k && j<2+start; j++) {
            int sum = d[i] + f[j];
            mn = min(mn, max(sum-l, r-sum));
        }
    }

    ito(n-1) {
        if (i == ind) continue;
        int dif = a[i+1] - a[i];
        if (dif > mn) {
            mn = dif;
        }
    }

    cout << mn << '\n';


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




