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
    int l = 0;
    int r = n-1;
    int mn = 1;
    int mx = n;
    while (l < r) {
        if (a[l] == mn) {
            l++;
            mn++;
        } else if (a[l] == mx) {
            l++;
            mx--;
        } else if (a[r] == mn) {
            r--;
            mn++;
        } else if (a[r] == mx) {
            r--;
            mx--;
        } else {
            cout << l+1 << ' ' << r+1 << '\n';
            return;
        }
    }
    cout << -1 << '\n';



}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    for (t; t!= 0; t--){
        solve();
    }
}
