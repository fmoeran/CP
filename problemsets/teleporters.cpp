#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

const ll INF = 1e10+1;

void solve(){
    int n; ll c;
    cin >> n >> c;
    vector<ll> prices(n);
    ito(n) {
        cin >> prices[i];
        prices[i] += 1 + i;
    }

    auto mn = min_element(all(prices));
    if (*mn > c) {
        cout << 0 << '\n';
        return;
    }
    int out = 1;
    c -= *mn;
    ito(n) {
        prices[i] = min(prices[i], prices[i]-(i+1)+(n-i));
    }
    *mn = INF;
    sort(all(prices));
    ito(n) {
        cout << prices[i] << ' ';
        if (prices[i] > c) break;
        out++;
        c -= prices[i];
    }
    cout << out << '\n';



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

