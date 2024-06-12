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

struct node {
    bool opens, closes;    // whether there is too many of either at start or end
    bool hasopen, hasclose;// whether they have them at all
};

node combine(node& l, node& r) {
    node out;
    out.opens = r.opens;
    out.closes = l.closes;
    out.hasopen = l.hasopen || r.hasopen;
    out.hasclose = l.hasclose || r.hasclose;
    return out;
}

node t[4*N];

int n, q;
string s;

void create(int v, int tl, int tr) {
    if (tl > tr) return;
    else if (tl == tr) {
        t[v].opens = (s[tl] == '(');
        t[v].hasopen = t[v].opens;
        t[v].closes = (s[tl] == ')');
        t[v].hasclose = t[v].closes;
    }else {
        int mid = (tl + tr) /2;
        create(v*2, tl, mid);
        create(v*2+1, mid+1 , tr);
        t[v] = combine(t[v*2], t[v*2+1]);
    }
}

//node query(int v, int tl, int tr, int l, int r) {
//    if (l > r) return node{false, false, false, false};
//    else if (tl == l && tr == r) return t[v];
//    else {
//        int mid = (tl + tr) / 2;
//        return combine(query(v*2, tl, mid, l, min(r, mid)), query(v*2+1, mid+1, tr, max(l, mid+1), r));
//    }
//}

void update(int v, int i, int tl, int tr){
    if (tl > i || tr < i) return;
    if (tl == tr) {
        t[v].opens = (s[tl] == '(');
        t[v].hasopen = t[v].opens;
        t[v].closes = (s[tl] == ')');
        t[v].hasclose = t[v].closes;
    }else {
        int mid = (tl + tr) / 2;
        update(v*2, i, tl, mid);
        update(v*2+1, i, mid+1, tr);
        t[v] = combine(t[v*2], t[v*2+1]);
    }
}



void solve(){
    cin >> n >> q;
    cin >> s;
    create(1, 0, n-1);
    ito(4*n) cout << (!t[i].opens && !t[i].closes) << ' ';
    cout << '\n';
    while (q--) {
        int i; cin >> i; i--;
        if (s[i] == ')') s[i] = '(';
        else s[i] = ')';
        update(1, i, 0, n-1);
        //if (t[0].opens || t[0].closes) NO;
        //else YES;
        //ito(4*n) cout << (t[i].opens || t[i].closes) << ' ';
        //cout << '\n';

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
