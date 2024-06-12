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


void getPrimeFacts(int x, vector<pair<int, int>> &out) {
  int y = x;
  for (int p=2; y > 1; p++) {
    if (y%p == 0) {
      out.push_back(make_pair(p, 0));
      while (y%p == 0) {
        out.back().second++;
        y/=p;
      }
    }
  }
}

int binpow(int x, int y, int m) {
  if (y == 1) return x % m;

  int res = binpow(x, y/2, m);
  res = (res * res) % m;
  if (y%2) res = (res * x) % m;
  return res;
}

void solve() {
  int b, n;
  cin >> b >> n;
  vector<pair<int, int>> bfacts(0), nfacts(0);
  getPrimeFacts(b, bfacts);
  getPrimeFacts(n, nfacts);

  vector<pair<int, int>> possible(0);

  // case 1
  
  int mxDif = 1;
  bool can1 = true;
  for (auto p1 : nfacts) {
    can1 = false;
    for (auto p2 : bfacts) {
      if (p2.first == p1.first) {
        mxDif = max(mxDif, (p1.second+p2.second-1)/p2.second);
        can1 = true;
        break;
      }
    }
    if (!can1) break;
  }
  
  if (can1) possible.push_back(make_pair(1, mxDif));

  // case 2
  

  set<int> seen;
  for (int k=1; true; k++) {
    int pow = binpow(b, k, n);
    if (seen.find(pow) != seen.end()) {
      break;
    }

    seen.insert(pow);

    if (pow == 1)   {
      possible.push_back(make_pair(2, k));
      break;
    }
    if (pow == n-1)  {
      possible.push_back(make_pair(3, k));
      break;
    }
  }

  if (possible.empty()) {
    cout << 0 << '\n';
    return;
  }

  int bestKind, bestK = 99999999;

  for (int i=0; i<possible.size(); i++) {
    pair<int, int> p = possible[i];
    if (p.second < bestK) {
      bestKind = p.first;
      bestK = p.second;
    }
  }

  cout << bestKind << ' ' << bestK << '\n';
  // for (auto val : possible) cout << val.first << ' ' << val.second;
  // cout << '\n';

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





