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
const ll MOD = 1e9+7;
ll n, k, sizes[N], totals[N];
vector<vector<int>> graph;


ll add(ll x, ll y) {
    return (x+y)%MOD;
}

ll mul(ll x, ll y) {
    return (x*y)%MOD;
}

ll binpow(ll x, ll y){
    if (y == 0) return 1;
    ll out = binpow(x, y/2);
    out = mul(out, out);
    if (y%2 == 1) out = mul(out, x);
    return out;
}

ll inverse(ll x){
    return binpow(x, MOD-2);
}

void make_sizes(int root, int prev) {
    sizes[root] = 0;
    for (int child : graph[root]) {
        if (child == prev) continue;
        make_sizes(child, root);
        sizes[root] += sizes[child]+1;
    }
}

void make_totals(int root, int prev) {
    ll behind = add(n, -sizes[root]);
    //cout << root << ' ' << behind << '\n';
    totals[root] = mul(sizes[root], behind);
    totals[root] = add(totals[root], add(behind, -1));
    for (int child : graph[root]) {
        if (child == prev) continue;
        make_totals(child, root);
    }
}




void solve(){
    cin >> n >> k;
    graph = vector<vector<int>>(n);
    ito(n-1) {
        int a, b; cin >> a >> b; a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    if (k == 1 || k == 3) cout << 1 << '\n';
    else {
        make_sizes(0, 0);
        make_totals(0, 0);
        ll sum = accumulate(totals, totals+n, 0, add);
        cout <<  mul(sum, inverse(n*(n-1)/2));
    }

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
