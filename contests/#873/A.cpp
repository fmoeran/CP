#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;



void solve(){
    int n;
    cin >> n;
    int sum = n * (n+1) / 2;
    int extra = sum % n;
    cout << 1 + extra << ' ';
    for(int i=2; i<=n; i++) {
        cout << i << ' ';
    }
    cout << '\n';

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
}
