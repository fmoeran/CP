#include <cmath>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <ios>
#include <iostream>
#include <iterator>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <tuple>
#include <unordered_map>
#include <unordered_set>


using namespace std;

#define ll long long
#define mn(x) const ll N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define loop(n)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

mn(2e5+2);
ll n, a[N], m, pfx[N];


void solve() {
  cin >> n;

  ito(n) cin >> a[i];

  cin >> m;

  pfx[0] = 0;
  
  for (int i=1; i<n-1; i++) {
    ll rightDist = a[i+1]-a[i], leftDist = a[i]-a[i-1];
    if (rightDist > leftDist) pfx[i] = pfx[i-1] + 1;
    else pfx[i] = pfx[i-1] + a[i]-a[i-1];
  }
  ito(n) cout << a[i] << ' ';

  while (m--) {
    int x, y;
    cin >> x >> y;
    x--; y--;
    if (x > y) swap(x, y);
  }

}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t=1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}





