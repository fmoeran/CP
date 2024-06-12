#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(101);
int n, a[N], counts[N];


void solve(){
    cin >> n;
    fill(counts, counts+n, 0);
    ito(n) cin >> a[i];
    ito(n) {
        counts[a[i]]++;
    }

    ll total = 0;
    ito(n) {
        total += counts[i];
        if (!counts[i]) continue;
        if (n - total >= i) {
            cout << n-total << '\n';
            return;
        }
    }

    cout << -1 << '\n';

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
