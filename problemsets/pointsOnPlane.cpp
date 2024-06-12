#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;


void solve(){
    ll n;
    cin >> n;
    ll sq = ceil(sqrt(n))-1;
    if ((sq+1)*(sq+1) < n) sq = sq+1;
    cout << sq << '\n';

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
