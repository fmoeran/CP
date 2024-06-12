#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

ll lcm(ll a, ll b) {
    return (a*b)/__gcd(a, b);
}

void solve(){
    ll n, m;
    cin >> n >> m;
    ll mod = 1;
    ll mx = n*m;
    ll best = n*m;
    ll num = n;
    while(n%(mod*10) == 0) mod *= 10;
    while (mod <= 1e17) {
        mod *= 10;
        for(int mult=2; mult<=10; mult++) {
            if ((num*mult)%mod != 0) continue;
            num *= mult;
            break;
        }
        if (num > mx) break;
        best = mx/num * num;
    }
    cout << best << '\n';
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
