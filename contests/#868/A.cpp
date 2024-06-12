#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(101);
int n, k;


void solve(){
    cin >> n >> k;
    ito(n+1) {
        int res = (i*(i-1) + (n-i)*(n-i-1))/2;
        if (res == k) {
            YES;
            jto(i) cout << 1 << ' ';
            jto(n-i) cout << -1 << ' ';
            cout << '\n';
            return;
        }
    }
    NO;

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
