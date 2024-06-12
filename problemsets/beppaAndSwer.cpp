#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;

mn(1e5+1);

int n, a[N], b[N], c[N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    ito(n) cin >> b[i];
    fill(c, c+n, 0);
    ito(n) {
        c[a[i]-1] -= i;
        c[b[i]-1] += i;
    }
    int total = 0;
    int change = 0;
    for (int i=n-1; i>=0; i--) {
        int ind = a[i]-1;
        if (c[ind] - change != 0) {
            total++;
            change++;
        }
    }
    cout << total << '\n';

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
