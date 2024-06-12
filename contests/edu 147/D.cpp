#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
int n, k;
ll l[N], r[N];


void solve(){
    cin >> n >> k;
    ito(n) cin >> l[i];
    ito(n) cin >> r[i];
    ll total = 0;
    ll pressed = 0;
    ll pos = 0;
    int ind = 0;
    while (ind < n && total < k) {
        pressed += 2;
        pos = r[ind];
        total += r[ind]-l[ind] + 1;
        ind++;
    }
    if (total < k) {
        cout << -1 << '\n';
        return;
    }
    priority_queue<ll, vector<int>, greater_equal<int>> sizes;
    for (int i=0; i<ind; i++) {
        sizes.push(r[i]-l[i]);
    }
    ll best = pressed;
    ll bestPos = pos;
    ll bestTotal = total;
    while (total - sizes.top() - 1 >= k) {
        total -= sizes.top() + 1;
        pressed -= 2;
        sizes.pop();
    }
    if (best > pressed) {
        best = pressed;
        bestTotal = total;
    }
    while (ind < n) {
        while (total - sizes.top() - 1 >= k) {
            total -= sizes.top() + 1;
            pressed -= 2;
            sizes.pop();
        }
        if (best > pressed) {
            best = pressed;
            bestPos = pos;
            bestTotal = total;
        }
        pressed += 2;
        pos = r[ind];
        total += r[ind]-l[ind]+1;
        ind++;
    }

    best = min(best, pressed);
    cout << best + k + (bestPos-bestTotal) << '\n';


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
