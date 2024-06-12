#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;

// x, x-1, x-2, ... y, ... x-1


int x, y;

void solve(){
    cin >> x >> y;
    int dif = x-y;
    cout << 2*dif << '\n';
    int i = x;
    while (i != y) {
        cout << i << ' ';
        i--;
    }
    while (i != x) {
        cout << i << ' ';
        i++;
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
