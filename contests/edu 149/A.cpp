#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int x, k;

void solve(){
    cin >> x >> k;
    if (x%k != 0) {
        cout << 1 << '\n';
        cout << x << '\n';
    }else {
        cout << 2 << '\n';
        cout << 1 << ' ' << x-1 << '\n';
    }

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
