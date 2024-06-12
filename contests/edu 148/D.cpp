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
ll n, q, a[N], mins[N+1], k;

void solve(){
    cin >> n >> q;
    ito(n) cin >> a[i];
    sort(a, a+n);
    ll dist = 0;
    ito(n) dist += a[i] - a[0];
    mins[0] = a[0];
    for (int i=1; i<=n; i++) {
        mins[i] = min(mins[i-1]+1, a[i-1]+1);
    }
    while (q--) {
        cin >> k;
        ll change = (max(k-n, 0LL) + 1) /2;
        ll start = change * 2 + 1;
        ll arr[N];
        ito(n) arr[i] = a[i];
        int i=k, ind = 0;
        while (i >= start) {
            arr[ind] += i;
            i--; ind++;
        }
        sort(arr, arr+n);
        ll mn = arr[0];
        ito(n) {
            if (change <= 0) break;
            if (arr[i] > mn) {
                ll temp = min(arr[i] - mn, change);
                arr[i] -= temp;
                change -= temp;
            }
        }
        if (change <= 0) {
            cout << mn << ' ';
        }else {
            cout << mn - (change+n-1)/n << ' ';
        }
    }
    cout << '\n';

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
}
