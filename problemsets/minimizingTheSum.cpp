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

mn(3e5+2);

ll n, k, a[N];

void minimize(int i, int l) {
    ll minval = *min_element(a+i, a+i+l+1);
    for (int ind=i; ind<=i+l; ind++) a[ind] = minval;
}


void solve() {
    cin >> n >> k;
    ito(n) cin >> a[i];

    vector<vector<float>> dens;
    while (k) {
        dens = vector<vector<float>>(n, vector<float>(k+1, 0));
        ito(n) {
            ll mn = a[i];
            ll changed = 0;
            jto(k+1) {
                int ind = i+j;
                if (ind >= n) break;
                changed += max(0ll, (mn-a[ind])*j);
                changed += max(0ll, a[ind] - mn);
                mn = min(mn, a[ind]);
                dens[i][j] = j==0? 0 : (float)changed/(float)j;
            }
        }

        int mi=0, mj=0, md=0;
        ito(n) jto(k+1) {
            if (dens[i][j] > md) {
                mi = i; mj = j; md = dens[i][j];
            }
        }
        if (md == 0) break;

        minimize(mi, mj);
        k -= mj;
    }

    ito(n) cout << a[i] << ' ';
    cout << '\n';
    cout << accumulate(a, a+n, 0ll) << '\n';

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

