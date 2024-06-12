#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
int n, m;
ll p[26], f[N];

void solve(){
    cin >> n >> m;
    string s; cin >> s;
    fill(p, p+26, 0);
    fill(f, f+N, 0);
    ito(m) {
        int pos; cin >> pos;
        f[pos]++;
    }
    ll total = 0;
    for (int i=n-1; i>=0; i--) {
        int pos = s[i]-'a';
        p[pos] += total + 1;
        total += f[i];
    }
    ito(26) cout <<  p[i] << ' ';
    cout << '\n';

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
