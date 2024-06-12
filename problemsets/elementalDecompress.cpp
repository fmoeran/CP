#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
int n, a[N], inds[N], q[N], p[N];


bool cmp(int x, int y) {
    return a[x] < a[y];
}

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    ito(n) inds[i] = i;
    sort(inds, inds+n, cmp);
    int lp = 1, lq = 1;
    unordered_set<int> sp, sq;
    ito(n) {
        int ind = inds[i];
        int val = a[ind];
        if (val < max(lp, lq)) {
            NO;
            return;
        }
        if (sp.find(val) == sp.end()) {
            p[ind] = val;
            q[ind] = lq;
        }else if (sq.find(val) == sq.end()) {
            q[ind] = val;
            p[ind] = lp;
        }else {
            NO;
            return;
        }
        sq.insert(q[ind]);
        sp.insert(p[ind]);
        while (sp.find(lp) != sp.end()) lp++;
        while (sq.find(lq) != sq.end()) lq++;
    }
    YES;
    ito(n) cout << p[i] << ' ';
    cout << '\n';
    ito(n) cout << q[i] << ' ';
    cout << '\n';
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
