#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


struct attack{
    int t, d, coord;

    bool operator<(const attack& other) {return t < other.t;}
};

int n, m, r;




void solve(){
    cin >> n >> m >> r;
    n++; m++;

    vector<attack> attacks(r);
    ito(r) {
        cin >> attacks[i].t >> attacks[i].d >> attacks[i].coord;
    }
    sort(all(attacks));

    vector<vector<int>> grid(n, vector<int>(m, 0));
    grid[0][0] = 1;
    int out = 0;
    int attackInd = 0;
    bool changed = true;
    while (attackInd < r && changed) {
        changed = false;
        int dif, t;
        vector<bool> cols(m, true);
        vector<bool> rows(n, true);

        if (attackInd == 0) {
            dif = attacks[attackInd].t;
            t = dif;
        }
        else {
            dif = attacks[attackInd].t - attacks[attackInd-1].t;
            t = attacks[attackInd].t;
        }
        while (attackInd < r && attacks[attackInd].t == t) {
            attack a = attacks[attackInd];
            if (a.d == 1) rows[a.coord] = false;
            if (a.d == 2) cols[a.coord] = false;
            attackInd++;
        }
        ito(n) jto(m) if (grid[i][j] > 0) {
            grid[i][j] = dif+1;
        }
//        ito(n) {
//            jto(m) cout << grid[i][j];
//            cout << '\n';
//        }

        for (int row=0; row<n; row++) {
            for (int col=0; col<m; col++) {
                if (grid[row][col] > 0) continue;
                if (row > 0) grid[row][col] = grid[row-1][col]-1;
                if (col > 0 && grid[row][col] < grid[row][col-1]) grid[row][col] = grid[row][col-1]-1;
                grid[row][col] = max(grid[row][col], 0);
            }
        }
        if (grid[n-1][m-1]) {
            if (grid[n-1][m-1] != 1 || (rows[n-1] && cols[m-1])) {
                cout << t - grid[n-1][m-1] + 1 << '\n';
                return;
            }
        }
        ito(n) jto(m) if (!rows[i] || !cols[j]) grid[i][j] = 0;

        ito(n) jto(m) if (grid[i][j]) changed = true;
    }


    if (!changed) cout << -1 << '\n';
    else {
        int mn = m*n+1;
        ito(n) jto(m) if (grid[i][j]) mn = min(mn, n-i+m-j-2);
        cout <<  attacks.back().t + mn << '\n';
    }



}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    cin >> T;
    while (T--){
        solve();
    }
}
