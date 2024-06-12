#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)


using namespace std;


ll fib[46];

void solve(){
    ll n, x, y;
    cin >> n >> x >> y;
    ll l, r, u, d;
    l = 1; r = fib[n+1];
    u = 1; d = fib[n];
    ito(n) {
        //cout << l << r << u << d << '\n';
        ll s = fib[n-i];
        if (i % 2 == 0) {
            if (y - l >= s) {
                l += s;
            }else if (r - y >= s) {
                r -= s;
            }else {
                cout << "NO\n";
                return;
            }
        }else {
            if (x - u >= s) {
                u += s;
            }else if (d - x >= s) {
                d -= s;
            }else {
                cout << "NO\n";
                return;
            }
        }

    }
    cout << "YES\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    fib[0] = 1; fib[1] = 1;
    for (int i=2; i<46; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }


    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
