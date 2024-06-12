#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

const ll MOD = 1e9+7;

mn(2e5+1);
int n, a[N], b[N];


ll mul(ll x, ll y) {
    return ((x%MOD) * (y%MOD)) % MOD;
}

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    ito(n) cin >> b[i];
    sort(a, a+n);
    sort(b, b+n);
    ll out = 1;
    if (a[0] <= b[0]) {
        cout << 0 << '\n';
        return;
    }
    for (int i=1; i<n; i++) {
        if (a[i] <= b[i]) {
            cout << 0 << '\n';
            return;
        }
        int ind = distance(a, upper_bound(a, a+i, b[i]));
        out = mul(out, i-ind+1);
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
