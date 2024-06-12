#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)


using namespace std;


int n, a, b;

void solve(){
    cin >> n >> a >> b;

    if (b < a) {
        cout << 1 << '\n';
        return;
    }
    int total = n / a;
    if (n%a != 0) total++;
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
