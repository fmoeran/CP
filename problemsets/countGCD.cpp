#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(2e5+1);
const ll MOD = 998244353;
ll n, m, a[N];


void solve(){
    cin >> n >> m;
    ito(n) cin >> a[i];

    for (int i=1; i<n; i++) {
        if (__gcd(a[i], a[i-1]) != a[i]) {
            cout << 0 << '\n';
            return;
        }
    }
    ll out = 1;
    for (int i=1; i<n; i++) {
        ll inc;
        if (a[i-1] == 1) {
            inc = m;
        }else {
            inc = (m/a[i])-(m/a[i-1]);
        }
        out = ((inc%MOD)*out)%MOD;
    }
    cout << out << '\n';

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
