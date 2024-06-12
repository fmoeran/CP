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
int n, k, x, a[N];

void solve() {
  cin >> n >> k >> x;
  ito(n) cin >> a[i];

  sort(a, a+n, greater<int>());

  int ind = 0;
  for (; ind< k; ind++);

  int total = 0;

  for (int inc=0; inc<x && ind < n; inc++, ind++) total -= a[ind];
  for (; ind<n; ind++) total += a[ind];

  int best = total;
  
  for (int rm = k-1; rm >= 0; rm--) {
    total -= a[rm];
    if (n - rm > x) total += 2 * a[rm + x];
    best = max(best, total);
  }
  cout << best << '\n';

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





