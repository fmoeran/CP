#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;

mn(2e5+1);
int n, q;
ll a[N], l, r, k;
int modsum[N+1];

void solve(){
    cin >> n >> q;
    ito(n){
        cin >> a[i];
    }
    modsum[0] = 0;
    ito(n) modsum[i+1] = (modsum[i] + (a[i]%2))%2;
    int totalMod = modsum[n+1];
    ito(q){
        cin >> l >> r >> k;
        ll range = r-l+1;
        int modRange = (modsum[r]-modsum[l-1])%2;
        int modNew = (k%2)*(range%2)%2;
        int change = (modNew-modRange)%2;
        int newTotal = (totalMod+change)%2;
        if (newTotal) cout << "YES\n";
        else cout << "NO\n";
    }

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
