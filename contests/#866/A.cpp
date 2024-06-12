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
    ll c = 0;
    for (int i=1; i<s.size(); i++) {
        if (s[i] == '^') continue;
        if (s[i-1] == '^') continue;
        c++;
    }
    if (s[0] == '_')c++;
    if (s[s.size()-1] == '_') c++;
    if (s.size() == 1 && s[0] == '^') c = 1;
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
