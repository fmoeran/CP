#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int x, y;

void solve(){
    cin >> x >> y;
    int dif = y - x;
    if (dif == 1) {
        cout << -1 << '\n';
        return;
    }
    int c = 0;
    while(true) {
        if ((x%dif) % dif == 0) {
            cout << c << '\n';
            break;
        }
        c++; x++;
    }

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
