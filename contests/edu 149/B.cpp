#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n;
string s;


void solve(){
    cin >> n >> s;
    int mx = 1;
    int curr = 1;
    for(int i=1; i<n; i++) {
        if (s[i] == s[i-1]) curr++;
        else curr = 1;
        mx = max(mx, curr);
    }
    cout << mx+1 << '\n';

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
