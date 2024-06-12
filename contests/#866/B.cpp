#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;




void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    int ind = -1;
    ito(s.size()) {
        if (s[i] == '0') {
            ind = i;
            break;
        }
    }
    if (ind == -1) {
        cout << n*n << '\n';
        return;
    }
    ll mx = 0;
    ll current = 0;
    for (int i = (ind+1)%n; i!=ind; i = (i+1)%n) {
        if (s[i] == '0') {
            current = 0;
            continue;
        }
        current++;
        mx = max(current, mx);
    }
    ll c = 0;
    for (int i=0; i<mx; i++) {
        c = max(c, (i+1)*(mx-i));
    }
    cout << c << '\n';

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
