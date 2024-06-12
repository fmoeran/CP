#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(2e5+1);
int n, k, a[N], h[N];
bool d[N];

int getLongest(int l, int r) {
    int sum = 0;
    int out = 0;
    ito(r-l+1) {
        if (l + i > r) break;
        sum += a[l+i];
        if (sum <= k) out = i+1;
        else {
            sum -= a[l+i];
            l++;
            i--;
        }
    }
    return out;
}


void solve(){
    cin >> n >> k;

    ito(n) cin >> a[i];
    ito(n) cin >> h[i];

    fill(d, d+n, false);
    d[n-1] = true;

    ito(n-1) d[i] = (h[i] % h[i+1] == 0);

    int l=0;

    int longest = 0;

    ito(n) {
        if (d[i] == 0) {
            longest = max(longest, getLongest(l, i));
            l = i+1;
        }
    }
    longest = max(longest, getLongest(l, n-1));
    cout << longest << '\n';




}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    cin >> T;
    while (T--){
        solve();
    }
}
