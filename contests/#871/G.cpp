#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int starts[2024];

void solve(){
    ll n; cin >> n;
    ll total = n*n;
    int row, col;
    ito(n) {
        if (starts[i+1] > n) {
            row = i; break;
        }
    }
    col = n-starts[row];
    int l=col, r=col;
    while (--row >= 0) {
        l = max(0, l-1);
        r = min(starts[row+1]-starts[row]-1, r);
        ll i = starts[row] + l;
        jto(r-l+1) {
            total += i*i;
            i++;
        }
    }
    cout << total <<'\n';

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    starts[0] = 1;
    for (int i=1; i<2024; i++) {
        starts[i] = starts[i-1] + i;
    }


    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
}
