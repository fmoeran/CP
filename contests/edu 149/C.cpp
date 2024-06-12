#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

string s;

void solve(){
    cin >> s;
    int n = s.size();
    int i=0;
    while (i<n && s[i] == '?') i++;
    if (i == n) {
        ito(n) cout << 1;
        cout << '\n';
        return;
    }

    fill(s.begin(), s.begin()+i, '0');
    for (i++; i<n; i++) {
        if (s[i] != '?') continue;
        s[i] = s[i-1];
    }
    cout << s << '\n';

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
