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
int n, a[N];
bool seen[N], cycles[N], ones[N];

void setCycles(int root, int start) {
    seen[root] = true;
    int child = root + a[root];
    if (child >= n || child < 0) cycles[root] = false;
    else if (child == root) cycles[root] = true;
    else if (child == start) cycles[root] = true;
    else if (seen[child]) {
        cycles[root] = cycles[child];
        ones[root] = ones[child];
    }
    else {
        setCycles(child, start);
        cycles[root] = cycles[child];
        ones[root] = ones[child];
    }
}


int getChainLength(int root) {
    int child = root + a[root];
    if (child >= n || child < 0) return 1;
    else return getChainLength(child)+1;
}

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    fill(cycles, cycles+n, false);
    fill(seen, seen+n, false);
    fill(ones, ones+n, false);
    ones[0] = true;
    ito(n) {
        if (!seen[i]) setCycles(i, i);
    }
    ll out = 0;
    if (cycles[0]) {

    }else {
        int numCycles = accumulate(cycles, cycles+n, 0);
        int length = getChainLength(0);
        int oneSum = accumulate(ones+1, ones+n, 0);
        cout << length << ' ' << numCycles << '\n';
        out = /*length * (n+n-numCycles) + */(n-length) * (2*n+1);

        ito(length) {
            cout << out << '\n';
            out += n - i - numCycles - oneSum + n;
        }
    }
    cout << out << '\n';
    //ito(n) cout << ones[i] << ' ';
    //cout << '\n';


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
