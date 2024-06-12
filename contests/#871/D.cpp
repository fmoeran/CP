#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


int n, m;

bool canMake(int k) {
    if (k == n) return true;
    else if (k > n) return false;
    if (canMake(3*k)) return true;
    if (k%2 == 0 && canMake(k/2*3)) return true;
    return false;
}

void solve(){
    cin >> n >> m;
    if (canMake(m)) YES;
    else NO;
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
