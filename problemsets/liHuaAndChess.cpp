#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;




void solve(){
    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 1) {
        cout << '!' << ' ' << 1 << ' ' << 1 << '\n';
        cout.flush();
        return;
    }

    cout << '?' << ' ' << n << ' ' << m << '\n';
    cout.flush();
    int dist; cin >> dist;

    int top = max(n-dist, 1);
    int left = max(m-dist, 1);

    cout << '?' << ' ' << top << ' ' << left << '\n';
    cout.flush();
    cin >> dist;

    cout << '?' << ' ' << top << ' ' << min(left + dist, m) << '\n';
    cout.flush();
    int dist2; cin >> dist2;
    if (dist2 == 0) {
        cout << '!' << ' ' << top << ' ' << left + dist << '\n';
    }else {
        cout << '!' << ' ' << top + dist << ' ' << left << '\n';
    }
    cout.flush();
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
