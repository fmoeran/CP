#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


int k;


void solve(){
    cin >> k;
    ll mn = -1;
    ll mx = -1;
    while (k--) {
        int qtype;
        cin >> qtype;
        if (qtype == 1) {
            ll a, b, n;
            cin >> a >> b >> n;
            ll q = n * (a-b) + b;
            ll newmax = n * (a-b) + b;
            ll newmin = (n-1) * (a-b) + b + 1;
            if (n == 1) newmin = 1;
            if (mn == -1) {
                cout << 1 << ' ';
                mn = newmin;
                mx = newmax;
            }else {
                if (newmax< mn || newmin > mx) {
                    cout << 0 << ' ';
                }else {
                    cout << 1 << ' ';
                    mx = min(mx, newmax);
                    mn = max(mn, newmin);
                }
            }
        }else {
            ll a, b;
            cin >> a >> b;
            if (mn == -1) {
                cout << -1 << ' ';
                continue;
            }
            if (a >= mx) {
                cout << 1 << ' ';
                continue;
            }
            ll div = a-b;

            if (div < mx - mn + 1) {
                cout << -1 << ' ';
                continue;
            }
            ll n = (mx - a + div - 1) / div;
            if ((n-1) * div + a < mn) {
                cout << n + 1 << ' ';
            }else {
                cout << -1 << ' ';
            }
        }
        //cout << mn << ' ' << mx << ' ';

    }

    cout << '\n';
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
