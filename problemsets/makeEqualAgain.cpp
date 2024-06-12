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

mn(2e5+1);
int n, a[N];


void solve() {
  cin >> n;
  ito(n) cin >> a[i];

  int l=0, r=n-1;
  for (; l<n; l++) if (a[l] != a[0]) break;
  for (; r>=0; r--) if (a[r] != a[n-1]) break;
  l--; r++;
  if (l >= r) {
    cout << 0 << '\n';
    return;
  }

  int out = r - l - 1;
  
  if (a[0] != a[n-1]) {
    int mn = min(l+1, n-r);
    out += mn;
  }
  cout << out << '\n';



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





