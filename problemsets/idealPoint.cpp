
#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;

using namespace std;

int n, k;
int l, r;
bool lefti, righti;


void solve(){
    lefti = false;
    righti = false;
    cin >> n >> k;
    for (int i=0; i<n; i++){
        cin >> l >> r;
        if (l == k) lefti = true;
        if (r == k) righti = true;
    }
    if (lefti && righti) cout << "YES" << '\n';
    else cout << "NO" << '\n';
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
