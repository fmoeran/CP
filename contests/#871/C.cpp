#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(__builtin_inf());
void solve(){
    int n; cin >> n;
    int bestL = N;
    int bestR = N;
    int bestBoth = N;
    bool l=false, r=false;
    ito(n) {
        int m; string s;
        cin >> m >> s;
        if (s[0] == '1') {
            bestL = min(bestL, m); l = true;
        }
        if (s[1] == '1') {
            bestR = min(bestR, m); r = true;
        }
        if (s[1] == '1' && s[0] == '1') bestBoth = min(bestBoth, m);
    }
    if (!(l&&r)) cout << -1 << '\n';
    else {
        cout << min(bestL+bestR, bestBoth) << '\n';
    }
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
