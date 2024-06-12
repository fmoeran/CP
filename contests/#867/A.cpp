#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(51);
int a[N], b[N];


void solve(){
    int mx = -1;
    int n; cin >> n;
    int t; cin >> t;
    ito(n) cin >> a[i];
    ito(n) cin >> b[i];
    int nt = t;
    ito(n) {
        if (nt >= a[i] && (mx == -1 || b[i] > b[mx])) {
            mx = i;
        }
        nt--;
    }
    if (mx == -1) {
        cout << -1 << '\n';
    }else {
        cout << mx + 1  << '\n';
    }

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
