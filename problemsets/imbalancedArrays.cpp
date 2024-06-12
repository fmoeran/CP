#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(1e5+2);

int n, a[N], b[N];
pair<int, int> p[N];

void solve(){
    cin >> n;

    ito(n) cin >> a[i];

    ito(n) {
        p[i] = make_pair(a[i], i);
    }

    int x = n;
    sort(p, p+n);
    int neg = 0, pos = 0;
    int l = 0, r = n-1;
    while (x > 0) {
        if (p[r].first == n - neg) {
            b[p[r].second] = x;
            pos++; r--;
        }else if (p[l].first == pos) {
            b[p[l].second] = -x;
            neg++; l++;
        } else {
            NO;
            return;
        }
        x--;
    }
    YES;
    ito(n) cout << b[i] << ' ';
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
