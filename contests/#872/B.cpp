#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(10001);
ll a[N];

void solve(){
    ll n, m; cin >> n >> m;
    ll s = n*m;
    ito(n*m) cin >> a[i];
    sort(a, a+(n*m));
    ll res1 = (a[s-1]-a[0]) * (s - min(n, m)) + (a[s-1]-a[1]) * (min(n, m)-1);
    ll res2 = (a[s-1]-a[0]) * (s - min(n, m)) + (a[s-2]-a[0]) * (min(n, m)-1);
    cout << max(res1, res2) << '\n';
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
