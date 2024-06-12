#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n, k;

void solve(){
    cin >> n >> k;

    int low = (n/2+k-1)/k;
    int out = 0;
    if (n-low*k+k-1 > low*k-k+1) {
        out = 1;
    }
    out += low * 2;
    cout << out << '\n';



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
