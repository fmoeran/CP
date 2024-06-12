#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e5+2);
int n, m, num;

void solve(){
    cin >> n >> m;
    bitset<N> seen;
    int maxIntel = 0;
    ito(n) {
        cin >> num;
        seen.set(num);
        maxIntel = max(maxIntel, num);
    }
    if (m == 1) {
        cout << 0 << '\n';
        return;
    }

    ll mn = N;
    ll mx = -1;


    for (int i=2; i<=m; i++){
        ll r = i;
        ll cmin = N;
        ll cmax = -1;
        while (r <= maxIntel) {
            if (seen[r]) {
                cmin = min(cmin, r);
                cmax = max(cmax, r);
            }
            r += i;
        }
        if (cmin == N) {
            cout << -1 << '\n';
            return;
        }else if (cmin == cmax) {
            mn = min(mn, cmin);
            mx = max(mx, cmax);
        }
    }
    cout << mx << ' ' << mn << '\n';
    for(int i=2; i<=m; i++) {
        ll r = i;
        ll best = -N-10;
        while (r <= maxIntel) {
            if (seen[r]) {
                if (r>=mn && r <= mx) {
                    best = r;
                    break;
                }else if (r < mn) {
                    best = r;
                }else {
                    if (r-mx < mn-best) {
                        best = r;
                    }
                    break;
                }
            }
            r += i;
        }
        mx = max(mx, best);
        mn = min(mn, best);
    }

    cout << mx - mn << '\n';




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
