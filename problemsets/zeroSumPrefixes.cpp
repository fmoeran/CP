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
int n;
ll a[N];

ll getMedianCount(int i) {
    map<ll, ll> sums;
    ll sum = 0;
    for (int j=i+1; j<n && a[j] != 0; j++) {
        sum += a[j];
        if (sums.find(sum) == sums.end()) {
            sums.insert(make_pair(sum, 1LL));
        }else {
            ll c= sums.at(sum);
            c++;
            sums.erase(sum);
            sums.insert(make_pair(sum, c));
        }
    }
    ll mx = 0;
    for (auto p : sums) {
        mx = max(mx, p.second);
    }
    return mx;

}

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    ll total = 0;
    for (int i=0; i<n; i++) {
        if (a[i] != 0) continue;
        cout << getMedianCount(i) << '\n';
    }

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
