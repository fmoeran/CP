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
    int n, m;
    vector<vector<int>> grid;
    cin >> n >> m;
    grid = vector<vector<int>>(n, vector<int>(m));
    ito(n) {
        jto(m) {
            cin >> grid[i][j];
        }
    }

    for (int row=n-1; row>=0; row--) {
        for (int col=m-1; col>=0; col--) {
            if (row == n-1 && col == m-1) continue;
            //cout << row << ' ' << col << '\n';
            int val = grid[row][col];
            int right = (col<m-1) ? __gcd(val, grid[row][col+1]) : 0;
            int down  = (row<n-1) ? __gcd(val, grid[row+1][col]) : 0;
            grid[row][col] = max(right, down);
        }
    }
    cout << grid[0][0] << '\n';


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

