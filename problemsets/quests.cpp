#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
ll n, c,  d, a[N];
ll sums[N+1];

void solve(){
    cin >> n >> c >> d;
    ito(n) cin >> a[i];
    sort(a, a+n, greater<int>());
    ll sum = accumulate(a, a+min(n, d), 0);
    if (sum >= c) {
        cout << "Infinity" << '\n';
        return;
    }
    if (a[0] * d < c) {
        cout << "Impossible" << '\n';
        return;
    }
    sums[0] = 0;
    for(int i=1; i<n+1; i++) sums[i] = sums[i-1] + a[i-1];

    if (d < n) {
        ito(d) {
            ll total = sums[i+1] * (d / (i+1)) + sums[d%(i+1)];
            if (total < c) {
                cout << i-1 << '\n';
                return;
            }
        }
    }else {
        ito(n) {
            ll total = sums[i+1] * (d / (i+1)) + sums[d%(i+1)];
            if (total < c) {
                cout << i-1 << '\n';
                return;
            }
        }
    }
    for(int i=n; i<d; i++) {
        ll total = sum * (d / (i+1)) + sums[d%(i+1)];
        if (total < c) {
            cout << i-1 << '\n';
            return;
        }
    }



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
