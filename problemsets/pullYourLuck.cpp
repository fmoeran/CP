#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;


int n, x;
ll p;


void solve(){
    cin >> n >> x >> p;

    ll position = x;
    for (int i=1; i<=2*n; i++) {
        if (i > p) {
            cout << "NO\n";
            return;
        }
        position = (position + i) % n;
        if (position == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    for (t; t!= 0; t--){
        solve();
    }
}
