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
    int x; cin >> x;
    int y, ignore;
    for(int i=1; i<=1000; i++) {
        int sq = i*i;
        cout << "+ " << sq << endl;
        cin >> y;
        if (y == x) {
            for (int j=i; j<=sq; j+=i) {
                if (sq%j != 0) continue;
                cout << "+ " << sq << endl;
                cin >> y;
                if (y == x) {
                    cout << "! " << j << endl;
                    return;
                }
                cout << "- " << i*i << endl;
            }

        }else {
            cout << "- " << i*i << endl;
            cin >> ignore;
        }
    }

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
}
