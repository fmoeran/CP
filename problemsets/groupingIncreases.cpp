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
#define mn(x) const ll int N = x
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

  int mn = 0, mx = a[0], out = 0;

  for (int i=1; i<n; i++) {
    int val = a[i];
    if (val > mx) {
      mn = mx; mx = val;
      out++;
    }else if (val < mn) {
      mn = val;
    }else {
      mx = val;
    }
  }
  if (out > 0) out--;
  cout << out << '\n';
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t=1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}





