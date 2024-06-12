#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+2);

int n, m, a[N], b[N];

void solve(){
    cin >> n >> m;
    ito(n) cin >> a[i];
    ito(m) cin >> b[i];

    int x = 0;
    ito(n) x ^= a[i];

    int mn = x, mx = x;


    int y = 0;
    ito(m) y |= b[i];

    if (n%2 == 0) {
        mn ^= (y & mn);
    }else {
        mx |= y;
    }
    cout << mn << ' ' << mx << '\n';


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
