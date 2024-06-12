#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n;

void solve(){
    cin >> n;
    string s; cin >> s;

    int mx = 1, mn = 1;
    int ones = 0, zeros = 0;

    for(int x=0; x<n-1; x++) {
        int heat = x + 2;
        if (s[x] == '1') {
            ones++;
            mn = heat-zeros;
            mx = heat;
        }else {
            zeros++;
            mn = 1;
            mx = ones+1;
        }
        cout << mx - mn + 1<< ' ';
    }
    cout << '\n';

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
