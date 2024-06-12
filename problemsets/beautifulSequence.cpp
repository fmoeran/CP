#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)


using namespace std;

mn(101);
int n, a[N];


void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    ito(n) {
        if (a[i]-1 <= i) {
            cout << "YES\n";
            return;
        }

    }
    cout << "NO\n";
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
