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


const ll INF = 9e18;
ll x, k;
vector<vector<ll>> nums;
vector<ll> inds;

ll getRequired(ll i, ll j) {
  ll profit = 0, out=0;
  for (; j<nums[i].size() && profit <= 0; j++) {
    profit += nums[i][j];
    out = max(out, -profit);
  }
  if (profit > 0) return out;
  else return INF;
}

void solve() {
  cin >> x >> k;
  nums = vector<vector<ll>>(k);
  inds = vector<ll>(k, 0);
  ll total = x;

  priority_queue<pair<ll, ll>, vector<pair<ll, ll> >, greater<pair<ll, ll>>> pq;
  
  
  ito(k) {
    int l; cin >> l;
    nums[i] = vector<ll>(l);
    jto(l) cin >> nums[i][j];
    pq.push(make_pair(getRequired(i, 0), i));
  }


  while (!pq.empty()) {
    pair<ll, ll> p = pq.top();
    pq.pop();
    ll mnTotal = p.first, ind = p.second;
    if (mnTotal > total) break;
    ll start = total;
    for (; inds[ind] < nums[ind].size() && total - start <= 0; inds[ind]++) {
      total += nums[ind][inds[ind]];
    }
    if (inds[ind] < nums[ind].size()) pq.push(make_pair(getRequired(ind, inds[ind]), ind));
  }
  cout << total << '\n';

}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t=1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}





