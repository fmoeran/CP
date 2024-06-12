#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int mxN = x;

using namespace std;


mn(2e5);

ll int n, a[mxN], b[mxN];



void solve(){
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> a[i];

    }
    for (int i=0; i<n; i++){
        cin >> b[i];
    }
    
    ll int sum = accumulate(a, a+n, 0);

    sum += accumulate(b, b+n, 0);
    sum -= *max_element(b, b+n);

    cout << sum << '\n';

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