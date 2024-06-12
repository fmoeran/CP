#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;



mn(1e5+1);
int n, a[N], b[N];

void solve(){
    cin >> n;
    if (n%2 == 0) {
        cout << "No" << '\n';
        return;
    }
    cout << "Yes" << '\n';
    ito(n) a[i*2%n] = n+i+1;
    ito(n) cout << n-i << ' ' << a[i] << '\n';


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
