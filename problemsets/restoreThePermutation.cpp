#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e5+1);
int n, a[N], b[N];

void solve(){
    cin >> n;
    set<int> need;
    ito(n) need.insert(i+1);
    ito(n/2) {cin >> a[i]; need.erase(a[i]);}
    if (need.size() != n/2) {
        cout << -1 << '\n';
        return;
    }

    for(int i=n/2-1; i>=0; i--) {
        auto it = need.upper_bound(a[i]);
        if (it == need.begin()) {
            cout << -1 << '\n';
            return;
        }
        it--;
        b[i] = *it;
        need.erase(it);
    }
    ito(n/2) cout << b[i] << ' ' << a[i] << ' ';
    cout << '\n';



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
