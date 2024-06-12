#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;

int n, k;
void solve(){
    cin >> n >> k;
    int total = 0;
    int i=1;
    for (;i<=n && total+i <=k; i++) {
        cout << 1 << ' ';
        total += i;
    }
    int remaining = k-total;
    if (i <= n) {
        cout << remaining-total << ' ';
        i++;
    }
    while (i <= n) {
        i++;
        cout << -total-1 << ' ';
    }
    cout << '\n';



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
