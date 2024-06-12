#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(2e5+1);
int n, k, a[N];

void solve(){
    int c = 0;
    int last = -1;
    cin >> n >> k;
    ito(n) cin >> a[i];
    ito(n) {
        int num = a[i];
        int pos = i+1;
        if (pos%k != num%k) {
            c++;
            if (last == -1) last = i;
            else {
                int lastPos = last+1;
                int lastNum = a[last];
                if (lastPos%k != num%k || pos%k != lastNum%k) {
                    c++;
                }
            }
        }
    }
    if (c==0) cout << 0 << '\n';
    else if (c==2) cout << 1 << '\n';
    else cout << -1 << '\n';

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
