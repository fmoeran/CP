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
    if (s[0] == '0') {
        cout << 0 << '\n';
        return;
    }
    ll total = 1;
    if (s[0] == '?') total *= 9;
    for (int i=1; i<s.size(); i++) {
        if (s[i] == '?') total *= 10;
    }
    cout << total << '\n';
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
