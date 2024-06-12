#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n, m;

void solve(){
    cin >> n >> m;
    if (m%2 == 0) {
        ito(n*m) {
            cout << i+1 << ' ';
            if (i%m == m-1) cout << '\n';
        }
    }else if (n%2 == 0){
        ito(n*m) {
            int r = i/m, c = i%m;
            cout << c * n + r + 1 << ' ';
            if (c == m-1) cout << '\n';
        }

    }else {
        int d = 0;
        for (int r = 0; r<n; r++) {
            int row = (r * 2)%n;
            if (row > n) {
                row -= n;
            }
            for (int i = 0; i<m; i++) {
                int num = row * m + i;

                cout << num+1 << ' ';
                if (i == m-1) cout << '\n';
            }
        }
    }
    cout << '\n';


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
