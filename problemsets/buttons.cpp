#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;



void solve(){
    int a, b, c;
    cin >> a >> b >> c;




    if (c%2 == 1) {
        if (b <= a) cout << "First\n";
        else cout << "Second\n";
    }else {
        if (a <= b) cout << "Second\n";
        else cout << "First\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    cin >> T;
    while (T--){
        solve();
    }
}
