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
    string s;
    cin >> s;
    if (s.length() == 1) {
        NO;
    }else {
        char c = s[0];
        for(int i=1; i<s.length()/2; i++) {
            if (s[i] != c) {
                YES;
                return;
            }
        }
        NO;
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
