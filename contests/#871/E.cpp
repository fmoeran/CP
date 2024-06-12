#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


int n, m;
vector<vector<int> >grid;

int getSize(int row, int col) {
    int out = grid[row][col];
    grid[row][col] = 0;

    if (row != 0 && grid[row-1][col] != 0) out += getSize(row-1, col);
    if (row != n-1 && grid[row+1][col] != 0) out += getSize(row+1, col);
    if (col != 0 && grid[row][col-1] != 0) out += getSize(row, col-1);
    if (col != m-1 && grid[row][col+1] != 0) out += getSize(row, col+1);
    return out;

}

void solve(){
    cin >> n >> m;
    grid = vector<vector<int>>(n, vector<int>(m));
    ito(n) {
        jto(m) cin >> grid[i][j];
    }
    int best = 0;
    ito(n) jto(m) {
        if (grid[i][j] == 0) continue;
        best = max(best, getSize(i, j));
    }
    cout << best << '\n';

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
}
