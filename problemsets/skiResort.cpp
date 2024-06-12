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
int n, k, q, a[N];



void solve(){
    cin >> n >> k >> q;
    ito(n) cin >> a[i];
    ll out = 0;
    ll l = 0;
    while (l < n) {
        while (l < n && a[l] > q) l++;
        ll r = l;
        while (r < n && a[r] <= q) r++;
        if (r - l >= k) out += (r-l-k+1)*(r-l-k+2)/2;
        l = r;
    }
    cout << out << '\n';

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
