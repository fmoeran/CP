#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e5+1);

int n, q;
string s;
bitset<26> t[4*N];

void build(int v, int tl, int tr) { // 1, 0, n-1
    if (tl > tr) return;
    else if (tl == tr) t[v] = bitset<26>(1<<(s[tl]-'a'));
    else {
        int mid = (tl + tr)/2;
        build(v*2, tl, mid);
        build(v*2+1, mid+1, tr);
        t[v] = t[v*2] | t[v*2+1];
    }
}

bitset<26> collect(int v, int tl, int tr, int l, int r) {
    if (l > r) return bitset<26>(0);
    else if (tl == l && tr == r) return t[v];
    else {
        int mid = (tl + tr)/2;
        return collect(v*2, tl, mid, l, min(r, mid)) | collect(v*2+1, mid+1, tr, max(l, mid+1), r);
    }
}

void update(int v, int tl, int tr, int pos, bitset<26> b) {
    if (tl > tr) return;
    else if (tl == tr) t[v] = b;
    else {
        int mid = (tl + tr)/2;
        if (pos <= mid) update(v*2, tl, mid, pos, b);
        else update(v*2+1, mid+1, tr, pos, b);
        t[v] = t[v*2] | t[v*2+1];
    }
}



void solve(){
    cin >> s;
    n = s.size();
    cin >> q;
    build(1, 0, n-1);

    while(q--) {
        int type; cin >> type;
        if (type == 1) {
            int pos; char c;
            cin >> pos >> c;
            pos--;
            update(1, 0, n-1, pos, bitset<26>(1<<(c-'a')));
        }else {
            int l, r;
            cin >> l >> r;
            l--; r--;
            cout << collect(1, 0, n-1, l, r).count() << '\n';
        }
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
