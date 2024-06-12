#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)


using namespace std;

ll a, b;


void solve(){
    cin >> a >> b;
    ll l = 1;
    ll mx, mn;
    mn = min(a, b);
    mx = max(a, b);
    while ((mx+l-1)/l > (mx+l)/(l+1)){
        l++;
    }
    ll total = (mx+l-1)/l;
    if (l < mn) total += (mn+l-1)/l;
    else total++;
    cout << l << ' ';
    cout << total + l - 1 << '\n';
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
