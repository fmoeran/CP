#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(1e5+1);
int n, k, a[N];
pair<int, int> p[N];

void solve(){
    cin >> n >> k;
    ito(n) cin >> a[i];

    set<int> rows, cols;
    ito(n) {
        rows.insert(i);
        cols.insert(i);
        p[i] = make_pair(a[i], i);
    }

    sort(p, p+n);

    int ind = 0;

    for (int colour=1; colour<=k; colour++) {
        if (ind >= n || p[ind].first != colour) {
            cout << 0 << ' ';
            continue;
        }
        int left=n, right=0, top=n, bottom=0;
        while (ind < n && p[ind].first == colour) {
            int pos = p[ind].second;
            left = min(left, *cols.begin());
            right = max(right, *cols.rbegin());
            top = min(top, *rows.begin());
            bottom = max(bottom, *rows.rbegin());
            cols.erase(pos);
            rows.erase(pos);
            ind++;
        }
        cout << (right - left + 1) + (bottom - top + 1) << ' ';
    }
    cout << '\n';

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    cin >> T;
    while (T--){
        solve();
    }
}
