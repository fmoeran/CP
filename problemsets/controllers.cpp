#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


ll n, k, x, y;

void solve(){
    cin >> n;
    string s;
    cout << s;
    cin >> s;
    cin >> k;
    ll p = 0;
    ll m = 0;
    ito(n) {
        if(s[i] == '+') {
            p += 1;
        }else {
            m += 1;
        }
    }
    ito(k) {
        cin >> x >> y;
        if (x == y) {
            if (p == m) YES;
            else NO;

            continue;
        }
        ll mult = y * (m - p);
        ll div = x-y;
        if (mult % div != 0) {
            NO;

            continue;
        }
        ll res = mult / div;
        if (res >= -m && res <= p) YES;
        else NO;
    }


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
}
