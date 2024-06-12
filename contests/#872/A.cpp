#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;



void solve(){
    string s; cin >> s;
    bool eq = true;
    ito(s.size()) {
        if (s[i] != s[0]) eq = false;
    }
    if (!eq) {
        cout << s.size()-1 << '\n';
    }
    else cout << -1 << '\n';

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
