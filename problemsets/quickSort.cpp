#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int mxN = x;

using namespace std;

mn(2e5+1);
int n, k, a[mxN];

void solve(){
    cin >> n >> k;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int c=0, dec=0;

    for (int i=0; i<n; i++){
        if (a[i] > i+1-c){
            c++;
            if (c%k == 0){
                dec++;
            }
        }
    }
    if (c%k != 0){
        dec++;
    }

    cout << dec << '\n';

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