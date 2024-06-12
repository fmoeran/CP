#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e6+1);
int n;
string s;


void solve(){
    cin >> n;
    cin >> s;
    int l = -1;
    ito(n) {
        if (s[i] == '1') {
            l = i;
            break;
        }
    }
    if (l == -1) {
        cout << 0 << '\n';
        return;
    }
    int r = l;
    for (int i=l; i<n; i++) {
        if (s[i] == '0') {
            r = i;
            break;
        }
    }
    if (r == l) {
        for (int i=l; i<n; i++) cout << s[i];
        cout << '\n';
        return;
    }
    reverse(s.begin(), s.end());
    bitset<N> b(s);
    int best = l;

    int total = n-r;

    for (int i=l+1; i<r; i++) {
        for (int j=0; j<total; j++) {
            bool v1 = b[best+j] | b[r+j];
            bool v2 = b[i+j] | b[r+j];
            if (v1 == v2) continue;
            else if (v1 < v2) {
                best = i;
            }
            break;
        }
    }
    for (int i=l; i<r; i++) cout << b[i];
    ito(total) cout << (b[r+i] | b[best+i]);


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
}
