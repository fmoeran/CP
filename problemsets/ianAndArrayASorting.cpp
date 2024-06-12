#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(3e5+1);
int n, a[N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];

    if (n == 2) {
        if (a[0] > a[1]) {
            NO;
        }else {
            YES;
        }
        return;
    }
    if (n%2 == 1) {
        YES;
        return;
    }
    ll mx = *max_element(a, a+n-1);
    ll mn = *min_element(a+1, a+n);
    //cout << mn << ' ' << mx << '\n';
    ll d1 = mn - a[0];
    ll d2 = a[1] - mx;
    if (d1 + d2 >= 0) YES;
    else NO;


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
