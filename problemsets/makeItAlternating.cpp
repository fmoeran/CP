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
ll M = 998244353;

ll fact(ll n) {
    ll out = 1;
    while (n > 0) {
        out *= n;
        out %= M;
        n--;
    }
    return out;
}

void solve(){
    string s;
    cin >> s;
    char prev = s[0];
    int a = 0,current = 0;
    ll b = 1, x=1;

    for (char c : s) {
        if (c != prev) {
            x = (x * current) % M;
            a += current - 1;
            current = 0;
            prev = c;
        }
        current += 1;
    }

    a += current-1;
    x = (x * current) % M;


    b = (x * fact(a)) % M;

    cout << a << ' ' << b << '\n';



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
