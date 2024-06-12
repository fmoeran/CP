#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;



void solve(){
    ll n, x;
    cin >> n >> x;
    if (n == x) {
        cout << n << '\n';
        return;
    }
    if (n < x || (n&x) != x) {
        cout << -1 << '\n';
        return;
    }

    ll i = 1;
    ll out = 0;
    while (i <= n) {
        if ((n&i) && (x&i)) {
            n = n & ~(i-1);
            if (n != x || out == i) {
                cout << -1 << '\n';
            }else {
                cout << (n | out) << '\n';
            }
            return;
        }else if ((n&i) && !(x&i)){
            out = i << 1;
        }
        i <<= 1;
    }
    cout << out << '\n';



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
