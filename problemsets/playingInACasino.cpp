#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)


using namespace std;

mn(3e5+1);
int n, m, a[N], b[N];


void solve(){
    cin >> n >> m;
    ito(n*m) cin >> a[i];
    if (n == 1) {
        cout << 0 << '\n';
        return;
    }
    ll total = 0;
    int j = 0;
    ito(m) {
        for (int ind = i; ind < n*m; ind += m, j++) {
            b[j] = a[ind];
        }
        sort(b+i*n, b+i*n+n);
        ll dif = 0;
        for (int ind = i*n+1; ind < i*n+n; ind++) {
            ll newDif = b[ind] - b[ind-1];
            dif += newDif * (ind - i*n);
            total += dif;
        }
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
