#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
ll n, h, a[N];

ll getBest(int i, ll x, int g, int b) {
    if (i == n) return 0;
    if (a[i] < x) {
        return 1 + getBest(i+1, x+a[i]/2, g, b);
    }else {
        ll out = 0;
        if (g > 0) out = getBest(i, x*2, g-1, b);
        if (b > 0) out = max(out, getBest(i, x*3, g, b-1));
        return out;
    }
}

void solve(){
    cin >> n >> h;
    ito(n) cin >> a[i];
    sort(a, a+n);
    cout << getBest(0, h, 2, 1) << '\n';

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
