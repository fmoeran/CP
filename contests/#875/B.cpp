#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);

int n, a[N], b[N], mxa[2*N], mxb[2*N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    ito(n) cin >> b[i];
    fill(mxa, mxa+2*n+2, 0);
    fill(mxb, mxb+2*n+2, 0);

    int curr=0;
    int num = -1;
    ito(n) {
        if (a[i] == num) {
            curr++;
        }else {
            curr = 1;
            num = a[i];
        }
        mxa[num] = max(mxa[num], curr);
    }
    curr=0;
    num = -1;
    ito(n) {
        if (b[i] == num) {
            curr++;
        }else {
            curr = 1;
            num = b[i];
        }
        mxb[num] = max(mxb[num], curr);
    }
    int mx = 0;
    ito(2*(n+1)) mx = max(mx, mxa[i]+mxb[i]);
    cout << mx << '\n';



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
