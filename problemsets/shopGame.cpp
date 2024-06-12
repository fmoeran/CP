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

struct Item {
    ll a, b;

    bool operator<(Item& other) {
        if (b < other.b) return true;
        if (b == other.b && a < other.a) return true;
        return false;
    }
};

mn(2e5+1);
int n, k;
Item items[N];

void solve() {
    cin >> n >> k;
    ito(n) cin >> items[i].a;
    ito(n) cin >> items[i].b;
    sort(items, items+n);
    ll sa = 0, sb = 0, best=0;
    int start = 0;
    ito(k) sa += items[i].a;
    ito(n-k) {
        sb += items[i].b;
        sa += items[i+k].a;

        if (items[i].b < items[i].a) {
            sb -= items[i].b;
            sa -= items[i].a;
        }

        best = max(best, sb - sa);
    }
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




