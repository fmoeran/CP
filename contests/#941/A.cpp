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

const int N = 101;
int counts[N];
int n, k;

void solve() {
    cin >> n >> k;
    fill(counts, counts+N, 0);
    ito(n) {
        int a;
        cin >> a;
        counts[a]++;
    }
    sort(counts, counts+N, greater<int>());
    int available = 0;
    ito(N) {
        if (counts[i] >= k) {
            available += k-1;

        }else {
            int dif = k-counts[i];
            if (dif > available) break;
            available += k-1-dif;
        }
        counts[i] = 0;
    }

    cout << accumulate(counts, counts+N, available) << '\n';

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




