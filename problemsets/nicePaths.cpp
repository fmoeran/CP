#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(5003);

constexpr ll MOD = 1e9+7;

ll n, k, a[N], c[N];
pair<ll, ll> bests[N]; // length, count
pair<ll, ll> maxs[N];
vector<int> nums[N];

ll add(ll x, ll y) {return (x + y) % MOD;}
ll mul(ll x, ll y) {return (x * y) % MOD;}

ll binpow(ll x, ll y) {
    if (y == 0) return 1;
    ll out = binpow(x, y/2);
    out = mul(out, out);
    if (y%2 == 1) out = mul(out, x);
    return out;
}

ll inverse(ll x) {return binpow(x, MOD-2);}

ll divide (ll x, ll y) {return mul(x, inverse(y));}

void solve(){
    cin >> n >> k;
    ito(n) cin >> a[i];
    if (k == 1) {
        cout << 1 << '\n';
        return;
    }
    if (k > 2) {
        ito(k-2) c[i] = 0;
        c[k-2] = 1;
        for (int i=k-1; i<=n; i++) {
            c[i] = mul(c[i-1], divide(i, i-(k-2)));
        }
    }else {
        ito(n+1) c[i] = 1;
    }
    fill(nums, nums+n+1, vector<int>());
    fill(bests, bests+n+1, make_pair(0, 1));
    fill(maxs, maxs+n+1, make_pair(0, 1));
    ito(n) {
        ll num = a[i];
        nums[num].push_back(i);
        if (nums[num].size() >= k) {
            int j = nums[num].size()-k;
            pair<ll, ll> best = {0, 0};

            for (; j>=0; j--) {
                pair<ll, ll> mx = maxs[nums[num][j]];
                if (mx.first > best.first) {
                    best = mx;
                }
                else if (mx.first < best.first) break;
                else {
                    best.second = add(best.second, mul(c[nums[num].size()-j-2], mx.second));
                }
            }
            best.first = add(best.first, 1);
            bests[i] = best;
        }
        if (i != 0) {
            maxs[i] = maxs[i-1];
            if (maxs[i].first == bests[i-1].first && maxs[i].first != 0) maxs[i].second = add(maxs[i].second, bests[i-1].second);
            else if (maxs[i].first < bests[i-1].first) maxs[i] = bests[i-1];
        }
    }
    ll mx = 0;
    ito(n) mx = max(mx, bests[i].first);
    if (mx == 0) cout << 1 << '\n';
    else {
        ll total = 0;
        ito(n) {
            if (bests[i].first == mx) total = add(total, bests[i].second);
        }
        cout << total << '\n';
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
