#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define INF 1e9+2
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
int n, a[N];



void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    int mn = 0, mx = INF;
    for (int i=1; i<n; i++) {

        if (a[i] < a[i-1]) mn = max(mn, (a[i]+a[i-1]+1)/2);
        else if (a[i] > a[i-1]) mx = min(mx, (a[i]+a[i-1])/2);
    }
    //cout << mn << ' ' << mx << '\n';
    if (mn > mx) {
        cout << -1 << '\n';
    }else {
        cout << mn << '\n';
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
