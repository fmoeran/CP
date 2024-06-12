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
int n, a[N], b[N];
bool sa[N], sb[N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    ito(n) cin >> b[i];

    ll a1, b1;
    a1 = distance(a, find(a, a+n, 1));
    b1 = distance(b, find(b, b+n, 1));

    ll l = min(a1, b1);
    ll r = max(a1, b2);
    ll d = r-l-1;

    ll out = l * (l + 1) / 2 ;
    out += d * (d+1) / 2;
    out += (n-r-1) * (n-r) / 2;

    fill(sa, sa+n+1, false);
    fill(sb, sb+n+1, false);








}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
}
