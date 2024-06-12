#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;



void solve(){
    int n; string a, b;
    cin >> n >> a >> b;
    if (n == 1) {
        YES;
        return;
    }
    int l=0, r=0;
    ito(n) {
        if (a[i] == 'B' && b[i] == 'B') {
            if (!(a[l] == 'B' && b[l] == 'B')) {
                l = i;
                r = i;
            }
            else r = i;
        }else {
            if (!(a[l] == 'B' && b[l] == 'B')) continue;

            if (l != 0 && r != n-1) {
                int range = r-l+1;
                if (range%2 == 0)  {
                    if (a[l-1] != a[r+1]) {
                        NO;
                        return;
                    }
                }else {
                    if (a[l-1] == a[r+1]) {
                        NO;
                        return;
                    }
                }

            }
            l = i; r = i;
        }
    }

    ito(n-1) {
        if (a[i] != a[i+1] && b[i] != b[i+1]) {
            NO;
            return;
        }
    }

    YES;
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
