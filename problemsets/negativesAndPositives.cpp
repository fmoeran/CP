#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;


mn(2e5+1);
int n, a[N];


void solve(){
    cin >> n;
    ito(n) cin >> a[i];

    ll mx = accumulate(a, a+n, (ll)0);
    ll current = mx;
    ito(n-1) {
        if (a[i] < 0) {
            current -= 2*(a[i] + a[i+1]);
            a[i] *= -1;
            a[i+1] *= -1;
            mx = max(mx, current);

        }
    }
    for (int i=n-1; i>0; i--) {
        if (a[i] < 0) {
            current -= 2*(a[i] + a[i-1]);
            a[i] *= -1;
            a[i-1] *= -1;
            mx = max(mx, current);

        }
    }
    cout << mx << '\n';

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
