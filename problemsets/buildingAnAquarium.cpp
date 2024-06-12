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
ll n, x, a[N];

void solve(){
    cin >> n >> x;

    ito(n) cin >> a[i];

    sort(a, a+n);

    ll i=0, h=a[0], inc;
    while (x > i) {
        if (i < n) {
            i++;
            while (i < n && a[i] == a[i-1]) i++;
            inc = min(x/i, a[i]-a[i-1]);
        }else{
            inc = x/i;
        }
        h += inc;
        x -= inc * i;
    }
    cout << h << '\n';

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
