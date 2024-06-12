#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e5+1);
ll n, m, k, a[N];

void solve(){
    cin >> n >> m >> k;
    ito(m) cin >> a[i];
    sort(a, a+m, greater<int>());
    ll numSections = (n+k-1)/k;
    if (a[0] > numSections) {
        NO;
        return;
    }
    ll c = 0;
    ito(m) {
        if (a[i] != numSections) break;
        c++;
    }

    if (c > n%k && n%k != 0) NO;
    else YES;

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
