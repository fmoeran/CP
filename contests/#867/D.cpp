#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;



void solve(){
    int n; cin >> n;
    if (n == 1) cout << 1 << '\n';
    else if (n%2 == 1) cout << -1 << '\n';
    else {
        cout << n << ' ';
        ito(n/2-1) {
            cout << n - 2*i - 1 << ' ';
            cout << i * 2 + 2 << ' ';
        }
        cout << 1 << '\n';
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
