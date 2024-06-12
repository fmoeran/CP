#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int a[101];

void solve(){
    int n; cin >> n;
    ito(n) cin >> a[i];
    int largest = 0;
    int curr = 0;
    ito(n) {
        if (a[i] == 0) curr++;
        else curr = 0;
        largest = max(largest, curr);
    }
    cout << largest << '\n';
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
