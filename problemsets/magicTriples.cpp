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
const ll int A = 1e6+1;

int n, a[N], counts[A];

ll choose(ll n, ll k) {
    ll out = 1;
    for(int i=2; i<=n-k; i++) {
        out *= k+i;
    }
    for(int i=2; i<=n-k; i++) {
        out /= i;
    }
    return out;
}

void solve(){
    ll out = 0;
    fill(counts, counts+A, 0);
    cin >> n;
    set<int> seen;
    ito(n) {
        cin >> a[i];
        counts[a[i]]++;
    }
    for(int i=0; i<n; i++) {
        ll j = a[i];
        if(seen.find(j) != seen.end()) continue;
        seen.insert(j);

        if (counts[j] >= 3) out += choose(counts[j], 3) * 6; // n choose k * 3!
        for(ll b=2; b*j <= A && b <= j; b++) {
            if (j % b != 0) continue;
            if (counts[j*b] && counts[j/b]) out += counts[j] * counts[j*b] * counts[j/b];
        }
    }
    cout << out << '\n';

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
