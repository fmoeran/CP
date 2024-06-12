#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;


void solve(){
    int a, b;
    int a1, a2, a3, a4;
    int total = 0;
    cin >> a1 >> a2 >> a3 >> a4;

    total = a = b = a1;

    if (total) {
        int change = min(a2, a3);

        total += 2 * change;
        a2 -= change;
        a3 -= change;
        if (a2) {
            total += min(b, a2);
            b -= min(b, change);
        }
        if (a3) {
            total += min(a, a3);
            a -= min(a, change);
        }
        change = min(min(a, b), a4);
        a4 -= change;
        total += change;
    }
    if (a4 || a3 || a2) total++;
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
