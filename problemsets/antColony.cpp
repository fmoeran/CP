#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

const int INF = 1e9+1;

struct segment {
    int minVal;
    int minCount;
    int div;
    segment(int mn, int c, int d) {
        minVal = mn;
        minCount = c;
        div = d;
    }
    segment() {
        minVal = INF; minCount = 0; div=0;
    }
};


mn(1e5+1);
int n, s[N], q;
segment t[4*N];

segment combine(segment x, segment y) {
    int newDiv;
    if (x.div == 0) newDiv = y.div;
    else if (y.div == 0) newDiv = x.div;
    else newDiv = __gcd(x.div, y.div);

    if (x.minVal == y.minVal) return segment(x.minVal, x.minCount+y.minCount, newDiv);
    else if (x.minVal < y.minVal) return segment(x.minVal, x.minCount, newDiv);
    else return segment(y.minVal, y.minCount, newDiv);
}

void build(int v, int tl, int tr) {
    if (tl > tr) return;
    else if (tl == tr) t[v] = segment(s[tl], 1, s[tl]);
    else {
        int mid = (tl + tr)/2;
        build(v*2, tl, mid);
        build(v*2+1, mid+1, tr);
        t[v] = combine(t[v*2], t[v*2+1]);
    }
}

segment collect(int v, int tl, int tr, int l, int r) {
    if (l > r) return segment();
    else if (tl == l && tr == r) return t[v];
    else {
        int mid = (tl+tr)/2;
        return combine(collect(v*2, tl, mid, l, min(mid, r)), collect(v*2+1, mid+1, tr, max(mid+1, l), r));
    }


}


void solve(){
    cin >> n;
    ito(n) cin >> s[i];
    cin >> q;
    build(1, 0, n-1);
    while (q--) {
        int l, r; cin >> l >> r; l--; r--;
        segment res = collect(1, 0, n-1, l, r);
        if (res.div < res.minVal) cout << (r-l+1) << '\n';
        else cout << r-l+1-res.minCount << '\n';
    }



}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
}
