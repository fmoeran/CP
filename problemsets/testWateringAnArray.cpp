
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


const ll N = 4, K = 5;
int n, k, d, a[N], b[K];


ll bf(int* arr, int i){
  if (i >= d) return 0;
  ll out = 0;
  ll count = 0;

  jto(n) count += (int)(arr[j] == j+1);

  int newArr[N];
  fill(newArr, newArr+n, 0);

  jto(b[i%k]) arr[j]++;

  out = max(out, bf(arr, i+1));

  out = max(out, count + bf(newArr, i+1));
  return out;
}

ll solve() {
  ll bestScore = 0;
  for (int i=0; i<min(n, d); i++) {
    ll count = 0;
    jto(n) count += (int)(a[j] == j+1);
    jto(b[i%k]) a[j]++;
    bestScore = max(bestScore, count+(d-i-1)/2);
  }

  return bestScore;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  n = 3; d = 3;
  int vals[N];
  for (k=1; k<=d; k++) {
    for (vals[0]=1; vals[0]<=n; vals[0]++) {
      for (vals[1]=1; vals[1]<=n; vals[1]++) {
        for (vals[2]=1; vals[2]<=n; vals[2]++) {
          int cpy[N];
          ito(n) a[i] = vals[i];
          ito(n) cpy[i] = a[i];
          cout << bf(cpy, 0) << endl;
          cout << solve() << endl;
          return 0;
        }
      }
    }
  }
  return 0;
}



