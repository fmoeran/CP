#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;


mn(1e5+1);
int n, w, h, a[N], b[N];



void solve(){
    cin >> n >> w >> h;
    ito(n) cin >> a[i];
    ito(n) cin >> b[i];
    int mn = 1e9+2;
    int mx = -1e9-2;
    ito(n) {
        int s = a[i]-b[i];
        mn = min(mn, s);
        mx = max(mx, s);
    }
    //cout << mn << ' ' << mx << '\n';
    if (mx-mn > 2*(w-h)) {
        cout << "NO\n";
    }else {
        cout << "YES\n";
    }



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
