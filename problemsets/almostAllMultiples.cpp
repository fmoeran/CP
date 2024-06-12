#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


void solve(){
    int n, x;
    cin >> n >> x;
    if (n % x != 0) {
        cout << -1 << '\n';
        return;
    }
    vector<int> out;
    cout << x << ' ';
    int holding = n;
    for(int i = n-1; i>1; i--) {
        if (i%x == 0 && holding%i == 0) {
            out.push_back(holding);
            holding = i;
        }else out.push_back(i);
    }
    while(!out.empty()) {
        cout << out.back() << ' ';
        out.pop_back();
    }
    cout << 1 << '\n';


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
