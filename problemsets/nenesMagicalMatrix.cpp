#include<bits/stdc++.h>


using namespace std;

#define ll long long
#define mn(x) const ll N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define loop(n)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"int n;

int n;

void permute() {
    ito(n) cout << n-i << ' ';
    cout << '\n';
}


void solve() {

    cin >> n;

    int total = 0;
    ito(n) {
        total += (i+1) * (2*i+1);
    }
    cout << total << ' ' << 2*n-1 << '\n';

    ito(2*n-1){
        int j = (i/2) + (i%2);
        if (i/2 % 2 == 0) { // col
            cout << 2 << ' ';
        }else { // row
            cout << 1 << ' ';
        }
        cout << j+1 << ' ';
        permute();
    }



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




