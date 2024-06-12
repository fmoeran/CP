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
#include <cstdint>


using namespace std;


#define int long long

#define ll long long
#define mn(x) const ll N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define loop(n)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

mn(1e5+2);
int n, a[N];


void solve() {
  cin >> n;
  ito(n) cin >> a[i];

  int pfx = 0;
  int odds = 0;

  ito(n) {
    int val = a[i];
    pfx += val;
    odds += val % 2;
    int res = pfx - odds/3;
    if (i > 0) res -= (odds%3)%2;
    cout << res << ' ';
  }
  cout << '\n';



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





