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

void solve() {
    int k, n;
    cin >> n >> k;

    vector<int> nums;
    int a = 1;
    int highest = 0;
    while (a + highest < k) {
        nums.push_back(a);
        highest += a;
        a <<= 1;
    }
    if (highest < k-1) nums.push_back(k-1-highest);
    highest = k-1;
    a = k+1;
    while (highest < n) {
        nums.push_back(a);
        highest += a;
        a = highest + 1;
    }
    nums.push_back(3*k+1);
    cout << nums.size() << '\n';
    for (auto val:nums) cout << val << ' ';
    cout << '\n';

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




