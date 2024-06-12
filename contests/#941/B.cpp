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


int n, m;

void solve() {
    cin >> n >> m;
    vector<string> grid(n);
    ito(n) cin >> grid[i];


    if (grid[0][0] == grid[n-1][m-1] || grid[0][m-1] == grid[n-1][0]) {
        YES;
        return;
    }
    bool left, right, bottom, top;
    bool out = false;
    // bottom left
    left=false; bottom=false;
    ito(n) if (grid[i][0] != grid[n-1][0]) left = true;
    ito(m) if (grid[n-1][i] != grid[n-1][0]) bottom = true;
    out = out || (left && bottom);
    // top left
    left=false; top=false;
    ito(n) if (grid[i][0] != grid[0][0]) left = true;
    ito(m) if (grid[0][i] != grid[0][0]) top = true;
    out = out || (left && top);
    // top right
    right=false; top=false;
    ito(n) if (grid[i][m-1] != grid[0][m-1]) right = true;
    ito(m) if (grid[0][i] != grid[0][m-1]) top = true;
    out = out || (right && top);
    // bottom right
    right=false; bottom=false;
    ito(n) if (grid[i][m-1] != grid[n-1][m-1]) right = true;
    ito(m) if (grid[n-1][i] != grid[n-1][m-1]) bottom = true;
    out = out || (right && top);

    if (out) YES;
    else NO;
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




