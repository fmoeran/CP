#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(5e3+1);
ll n, a[N], sums[N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    sums[0] = 0;
    ll mx = a[0];
    ll mn = a[0];
    for(int i=1; i<n; i++) {#
        sums[i] = 0;
        if (a[i] > mx) {
            mx = a[i];
            sums[i] = sums[i-1];
            continue;
        }
        if (a[i] < mn) {
            mn = a[i];
            sums[i] = i*(i+1)/2;
            continue;
        }



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
