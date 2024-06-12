#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
ll n, a[N];


void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    if (n == 2) {
        cout << a[0] * a[1] << '\n';\
        return;
    }
    sort(a, a+n);
    cout << max(a[0]*a[1], a[n-1]*a[n-2]) << '\n';

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
