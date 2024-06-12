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

uint32_t n, a[N], xa[N];
map<uint32_t, vector<uint32_t>> vecs;


void solve() {
    cin >> n;
    vecs.clear();
    ito(n) {
        cin >> a[i];
        xa[i] = a[i] >> 2;
        vecs[xa[i]].push_back(a[i]);
    }
    for (auto& p : vecs) {
        vector<uint32_t>& vec = p.second;
        sort(vec.begin(), vec.end(), greater<uint32_t>());
    }

    ito(n) {
        cout << vecs[xa[i]].back() << ' ';
        vecs[xa[i]].pop_back();
    }
    cout << '\n';
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




