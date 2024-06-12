#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int mxN = x;

using namespace std;


mn(1000);
int n, a[mxN];


void solve(){
    cin >> n;
    
    if (n%2 == 1){
        cout << "NO" << '\n';
    } else {
        cout << "YES" << '\n';
        for (int i=0; i<n/2; i++){
            cout << 1 << ' ' << -1 << ' ';
            cout << '\n';
        }
    }

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