#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e5+1);
int n, m, a[N];


void solve(){
    cin >> n >> m;
    ito(n) cin >> a[i];

    if (find(a, a+n, m) != a+n){
        cout << 1 << '\n';
        return;
    }

    int mx = *max_element(a, a+n);
    if (mx >= (m+1)/2) {
        cout << 2 << '\n';
    }else {
        cout << (mx + m - 1) / mx << '\n';
    }


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
