#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e5+1);
int n, a[N], lefts[N+1], zeros, ones, q;
string s;

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    cin >> s;
    zeros = 0; ones = 0;
    lefts[0] = 0;
    for (int i=1; i<n+1; i++) {
        lefts[i] = lefts[i-1] ^ a[i-1];
    }
    ito(n) {
        char c = s[i];
        if (c == '1') ones ^= a[i];
        else zeros ^= a[i];
    }

    cin >> q;
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            cin >> l >> r;
            int x = lefts[r] ^ lefts[l-1];
            ones ^= x;
            zeros ^= x;

        }else{
            int g;
            cin >> g;
            if (g == 0) cout << zeros;
            else cout << ones;
            cout << ' ';
        }
    }
    cout << '\n';


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
