#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(2e5+1);
int n, a[N], positions[N];

void solve(){
    cin >> n;
    ito(n) {
        cin >> a[i];
        a[i]--;
        positions[a[i]] = i;
    }
    ito(n) cout << positions[i] << ' ';
    int changes = 0;
    ito(n-1) {
        if (a[i] == i+1 && a[i+1] == a[i]) {
            changes--;
            return;
        }
    }



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
