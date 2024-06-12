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


vector<vector<int>> children;
int n, numPairs;

int search(int node) {
  int available = 0;
  for (int child : children[node]) {
    available = abs(available - search(child));
  }
  return 1 + available;
}

void solve() {
  cin >> n;
  children = vector<vector<int>>(n);

  for (int i=1; i<n; i++) {
    int p; cin >> p; p--;
    children[p].push_back(i);
  }

  numPairs = 0;
  cout << (n - search(0))/2 << '\n';


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





