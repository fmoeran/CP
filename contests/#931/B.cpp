#include<bits/stdc++.h>


using namespace std;

#define ll long long
#define mn(x) const ll N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define loop(n)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

int coins[] = {15, 10, 6, 3, 1};
int n;


void solve() {
    cin >> n;
    int total = 0;
    vector<int> smallest(0);
    smallest.push_back(0);
    for (int i=1; i<101; i++) {
        smallest.push_back(1000000);
        jto(5) {
            if (i-coins[j] >= 0)
                smallest[i] = min(smallest[i], smallest[i-coins[j]]+1);
        }
    }
    if (n > 15) {
        total += n/15;
        n = n%15;
        n += 15;
        total -= 1;
    }
    total += smallest[n];
    cout << total << '\n';

}


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  cin >> t;
  while (t--) {
#ifdef ONPC
    cout << "================================================\n";
#endif // ONPC
    solve();
  }

  return 0;
}




