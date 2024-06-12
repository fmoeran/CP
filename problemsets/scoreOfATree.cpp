#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


const ll M = 1e9+7;
mn(2e5+1);
int n;
int pow2[N];
int total;
vector<vector< int> > tree;
unordered_set<int> seen;

int add(int x, int y) {
    return (x%M + y%M) % M;
}

int mul(int x, int y) {
    return ((x%M) * (y%M)) % M;
}

int binpow(int x, int y) {
    if (y == 0) return 1;
    ll out = binpow(x, y/2);
    out = mul(out, out);
    if (y%2 == 1) out = mul(out, x);
    return out;
}

int sum1s(int x) {
    return mul(x, pow2[x-1]);
}

int go(int root) {
    seen.insert(root);
    if (tree[root].size() == 0) return 0;

    vector<int> depths;
    for (auto node: tree[root]) {
        if (seen.find(node) == seen.end()) depths.push_back(go(node));
    }
    if (depths.size() == 0) return 0;
    int mx = *max_element(depths.begin(), depths.end()) + 1;
    total = add(total, mul(mx, pow2[n-1]));
    return mx;

}


void solve(){

    cin >> n;
    tree.clear();
    tree = vector<vector<int> >(n);

    seen.clear();
    ito(n-1) {
        int a, b;
        cin >> a >> b;
        tree[a-1].push_back(b-1);
        tree[b-1].push_back(a-1);


    }
    total = sum1s(n);
    go(0);

    cout << total << '\n';



}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    pow2[0] = 1;
    for(int i=1; i<N; i++) {
        pow2[i] = mul(2, pow2[i-1]);
     }

    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
