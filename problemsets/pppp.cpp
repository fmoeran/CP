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
int n, k, a[N], evens[N], odds[N];

void solve(){
    cin >> n >> k;
    ito(n) cin >> a[i];
    fill(evens, evens+N, 0);
    fill(odds, odds+N, 0);
    ll out = 0;
    for (int i=1; i<k/2+1 && i+k/2<n-k/2; i++) {
        int l = k/2-i, r = k/2+i;
        auto counts = evens;
        if (r%2 == 1) counts = odds;
        counts[a[l]]++;
        if (i != 1) counts[a[r-2]]++;

        ito(10) cout << counts[i] << ' ';
        cout << '\n';

        out += (ll) i - counts[a[r]];
        cout << a[r] << ' ' << out << '\n';
    }
    for (int i=k; i<n-k/2; i++) {
        auto counts = evens;
        if (i%2 == 1) counts = odds;
        counts[a[i-k]]--;
        counts[a[i-2]]++;
        out += (ll) k/2 - counts[a[i]];

        ito(10) cout << counts[i] << ' ';
        cout << '\n';

        cout << a[i] << ' ' << out<< '\n';
    }
    for (int i=0; i<k/2; i++) {
        auto counts = evens;
        if (i%2 == 1) counts = odds;
        counts[a[n-k-1+i]]--;

        ito(10) cout << counts[i] << ' ';
        cout << '\n';

        out += (ll) k/2-i - counts[a[n-k/2+i]];
        cout << a[n-k/2+i] << ' ' << out << '\n';

    }
    cout << out << '\n';

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
