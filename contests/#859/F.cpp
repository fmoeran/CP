#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;



int n, m;
int row, col;
int srow, scol;
int frow, fcol;
char d[2];
int drow, dcol;
int dr, dc;


void solve(){
    cin >> n >> m >> row >> col >> frow >> fcol >> d;
    srow = row;
    scol = col;
    if (d[0] == 'D') drow = 1;
    else drow = -1;
    if (d[1] == 'R') dcol = 1;
    else dcol = -1;
    dr = drow;
    dc = dcol;

    if (row == n) dr = 1;
    else if (row == 1) dr = -1;
    if (col == m) dc = 1;
    else if (col == 1) dc = -1;

    int c = 0;
    while (!(row == frow && col == fcol)){
        bool increase = false;
        if (row + drow > n) {
            drow = -drow;
            increase = true;
        }
        else if (row + drow < 1) {
            drow = -drow;
            increase = true;
        }
        if (col + dcol > m) {
            dcol = -dcol;
            increase = true;
        }
        else if (col + dcol < 1) {
            dcol = -dcol;
            increase = true;
        }
        if (increase) c++;
        row += drow;
        col += dcol;
        if (row == srow && col == scol && drow == dr && dcol == dc){
            cout << -1 << '\n';
            return;
        }

    }
    cout << c << '\n';


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    for (t; t!= 0; t--){
        solve();
    }
}
