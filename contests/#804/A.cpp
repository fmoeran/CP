#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;




void solve(){
    int n;
    cin >> n;

    if (n%2 == 0) {
        cout << n/2 << ' ' << n/2 << ' ' << 0 << '\n';
    }else {
        cout << -1 << '\n';
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
