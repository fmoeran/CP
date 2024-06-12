#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;


mn(101);
int n, a[N], ops[N*30][2];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    if (count(a, a+n, a[0]) == n){
        cout << 0 << '\n';
        return;
    }
    if (count(a, a+n, 1) > 0) {
        cout << -1 << '\n';
        return;
    }

    int c = 0;
    while (count(a, a+n, a[0]) != n) {
        int mx = distance(a, max_element(a, a+n));
        int mn = distance(a, min_element(a, a+n));
        int newNum = (a[mx]+a[mn]-1)/a[mn];
        a[mx] = newNum;
        ops[c][0] = mx;
        ops[c][1] = mn;
        c++;
    }
    cout << c << '\n';
    ito(c) {
        cout << ops[i][0]+1 << ' ' << ops[i][1]+1 << '\n';
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
