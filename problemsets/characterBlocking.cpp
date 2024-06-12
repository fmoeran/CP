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
int n, k, q;
string s1, s2;
bool t[4*N];

void create(int v, int tl, int tr) {
    if (tl > tr) return;
    if (tl == tr) t[v] = (s1[tl] == s2[tl]);
    else {
        int mid = (tl + tr) /2;
        create(v*2, tl, mid);
        create(v*2+1, mid + 1, tr);
        t[v] = t[v*2] && t[v*2+1];
    }
}

void update(int v, int pos, int tl, int tr) {
    if (tl > pos || tr < pos) return;
    else if (tl == tr) t[v] = (s1[tl] == s2[tr]);
    else {
        int mid = (tl + tr) / 2;
        update(v*2, pos, tl, mid);
        update(v*2+1, pos, mid+1, tr);
        t[v] = t[v*2] && t[v*2+1];
    }
}

void setVal(int v, int pos, int tl, int tr, bool val) {
    if (tl > pos || tr < pos) return;
    else if (tl == tr) t[v] = val;
    else {
        int mid = (tl + tr) / 2;
        setVal(v*2, pos, tl, mid, val);
        setVal(v*2+1, pos, mid+1, tr, val);
        t[v] = t[v*2] && t[v*2+1];
    }
}

void solve(){
    cin >> s1 >> s2;
    cin >> k >> q;
    n = s1.size();
    queue<pair<int, int> > blocking; // {time set, index}
    create(1, 0, n-1);

    ito(q) {

        if (!blocking.empty() && blocking.front().first+k <= i) {
            int pos = blocking.front().second;
            setVal(1, pos, 0, n-1, s1[pos] == s2[pos]);
            blocking.pop();
        }
        int type; cin >> type;
        if (type == 1) {
            int pos; cin >> pos; pos--;
            blocking.push({i, pos});
            setVal(1, pos, 0, n-1, true);
        }
        else if (type == 2) {
            int x, y, pos1, pos2;
            cin >> x >> pos1 >> y >> pos2; pos1--; pos2--;
            string& sa = (x == 1) ? s1 : s2;
            string& sb = (y == 1) ? s1 : s2;

            swap(sa[pos1], sb[pos2]);
            update(1, pos1, 0, n-1);
            update(1, pos2, 0, n-1);
        }
        else {
            if (t[1]) YES;
            else NO;
        }
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
