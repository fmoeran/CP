#include<bits/stdc++.h>


using namespace std;

#define ll long long
#define mn(x) const ll N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

vector<pair<ll, ll>> ba;
vector<vector<ll>> dp;

const ll INF = 1e15+10;

ll n, l;

void solve() {
    cin >> n >> l;
    ba = vector<pair<ll, ll>>(n);
    ito(n) {
        cin >> ba[i].second >> ba[i].first;
    }
    sort(ba.begin(), ba.end());

    dp = vector<vector<ll>>(n, vector<ll>(n, INF));
    int best = 0;
    dp[0][0] = ba[0].second;
    for (ll i=1; i<n; i++) {
        ll a = ba[i].second;
        ll dif = a + ba[i].first - ba[i-1].first;
        //cout << dif << '\n';
        dp[i][0] = min(a, dp[i-1][0]);
        for (ll j=1; j<n; j++) {
            dp[i][j] = min(dp[i-1][j], dp[i-1][j-1]+ dif);
        }
    }

    for (auto vec : dp) {
        for (auto val : vec) cout << val << ' ';
        cout << '\n';
    }

    ito(n) jto(n) if (dp[i][j] <= l) best = max(best, j+1);

    cout << best << '\n';

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




