#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
int n, k;
ll a[N];

void solve(){
    cin >> n >> k;
    ito(n) cin >> a[i];
    sort(a, a+n);
    ll sum = accumulate(a, a+n, 0LL);
    ll lost = accumulate(a+n-k, a+n, 0LL);
    ll mn = lost;
    ito(2*k) {
        //cout << lost << '\n';
        lost -= a[n-k+i/2];
        lost += a[i];
        i++;
        lost += a[i];
        mn = min(mn, lost);
    }
    cout <<  sum - mn << '\n';
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
