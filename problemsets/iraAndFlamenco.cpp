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
const ll MOD = 1e9+7;
ll n, m, a[N];

ll add(ll x, ll y) {
    return (x+y)%MOD;
}

ll mul(ll x, ll y) {
    return (x*y)%MOD;
}

ll binpow(ll x, ll y) {
    if (y == 0) return 1;
    ll out = binpow(x, y/2);
    out = mul(out, out);
    if (y%2 == 1) out = mul(out, x);
    return out;
}

ll divide(ll x, ll y) {
    return mul(x, binpow(y, MOD-2));
}

void solve(){
    cin >> n >> m;
    ito(n) cin >> a[i];
    sort(a, a+n);
    vector<int> nums;
    vector<int> sums;
    vector<int> prods;
    sums.push_back(0);
    ito(n) {
        if (i!=0 && a[i-1] == a[i]) sums[sums.size()-1]++;
        else {
            nums.push_back(a[i]);
            sums.push_back(1);
        }
    }
    prods.push_back(1);
    for(int i=1; i<sums.size(); i++) {
        prods.push_back(mul(prods.back(), sums[i]));
    }


    ll out = 0;

    ito(nums.size()) {
        ll num = nums[i];
        int ub = distance(nums.begin(), upper_bound(nums.begin(), nums.end(), num-m));
        if (i-ub+1 < m) continue;
        ll combs = divide(prods[i+1], prods[ub]);
        out = add(out, combs);

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
