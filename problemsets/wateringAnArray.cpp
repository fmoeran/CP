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


const ll N = 2001, K = 1e5+1;
int n, k, d, a[N], b[K];


void solve() {
  cin >> n >> k >> d;
  ito(n) cin >> a[i];
  ito(k) cin >> b[i];

  ll bestScore = 0;
  for (int i=0; i<min(2*n+1, d); i++) {
    ll count = 0;
    jto(n) count += (int)(a[j] == j+1);
    jto(b[i%k]) a[j]++;
    bestScore = max(bestScore, count+(d-i-1)/2);
  }
  cout << bestScore << '\n';
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



