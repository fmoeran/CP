#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;



void solve(){
    ll n;
    cin >> n;
    ll out = 0;
    ll mul = 1;
    while (n) {
        ll add = n%9;
        n /= 9;
        if (add >= 4) add++;
        out += mul*add;
        mul *= 10;
    }
    cout << out << '\n';

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
