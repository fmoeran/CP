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

#define int long long

mn(2e5+1);
int n, x, y, a[N];
map<pair<int, int>, int> m;

void solve() {
    cin >> n >> x >> y;
    ito(n) cin >> a[i];

    m.clear();

    int total = 0;

    ito(n) {
        int k = a[i];
        int mx = k%x, my = k%y;
        auto res = m.find(make_pair(mx, my));
        if (res != m.end()) {
            total += m[make_pair(mx, my)];
        }
        pair<int, int> p = make_pair((x - mx)%x, my);
        m[p] += 1;
    }

    cout << total << '\n';



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





