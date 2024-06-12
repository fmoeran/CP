#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+3);


int l[N], r[N], a[N], b[N];

bool cmp1(int x, int y) {
    return a[x] < a[y];
}

bool cmp2(int x, int y) {
    return b[x] < b[y];
}

void solve(){
    int n, q;
    cin >> n;
    ito(n) {
        cin >> l[i] >> r[i] >> a[i] >> b[i];
    }

    int lowers[N], uppers[N];

    ito(n) {
        lowers[i] = i;
        uppers[i] = i;
    }

    sort(lowers, lowers+n, cmp1);
    sort(uppers, uppers+n, cmp2);

    ito(n) cout << lowers[i] << ' ';
    cout << '\n';



    cin >> q;

    int x;

    for (int z=0; z<q; z++) {
        cin >> x;

    }



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
