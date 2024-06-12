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
int n, a[N], mnk;

bool cmp(int i, j){

}


void solve() {
    cin >> n;
    ito(n) cin >> a[i];
    mnk = 1;

    for (int i=n-1; i>= 0; i++) {
        int ind = lower_bound(a+i, a+n, cmp)
    }



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




