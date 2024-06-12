#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)


using namespace std;

mn(1e5+1);
int n, m, a[N], f, g;

void solve(){
    cin >> n >> m;
    fill(a, a+n, n);
    ito(m) {
        cin >> f >> g;
        f--; g--;
        int mx = max(f, g);
        int dif = abs(f-g);
        a[mx] = min(dif, a[mx]);
    }
    ll total = 1;
    int l = 0;
    for (int r = 1; r<n; r++) {
        int dif = r-l;
        if (a[r] <= dif) l = r-a[r]+1;
        total += r-l+1;
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
