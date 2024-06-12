#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;


int a, b, c, d;

void solve(){
    cin >> a >> b >> c >> d;
    if (b > d){
        cout << -1 << '\n';
        return;
    }
    int dy = d - b;
    if (a + dy < c){
        cout << -1 << '\n';
        return;
    }
    cout << dy + (a + dy - c) << '\n';


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
