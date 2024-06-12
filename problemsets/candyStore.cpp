#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;



void solve(){
    int n; cin >> n;
    ll a, b; cin >> a >> b;
    int out = 1;
    ll mult, div;
    div = a * b; mult = b;
    ito(n-1) {
        cin >> a >> b;
        //cout << mult << ' ' << div << '\n';
        div = __gcd(div, a * b);

        mult = (mult * b) / __gcd(mult, b);

        if (div % mult != 0) {
            //cout << a << ' ' << b << ' ' << mult << ' ' << div << '\n';
            out++;
            div = a * b;
            mult = b;
        }
    }
    cout << out << '\n';

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
