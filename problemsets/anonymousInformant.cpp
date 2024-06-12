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
int n, k, b[N], d[N], difs[N];

int inds[N]; // difs[b[i]-d[i]]  = i

void solve(){
    cin >> n >> k;

    ito(n) cin >> b[i];

    ito(n) {
        d[i] = (b[i] + n - (i + 1))%n;
    }

    ito(n) {
        difs[i] = (b[i] - d[i] + n)%n;
    }

    ito(n) {
        inds[(b[i]-d[i] + n )%n] = i;
    }

    int i = 0;

    for (int q=0; q<min(k, n); q++) {
        i = (i-b[inds[i]] + n)%n;
        if (b[inds[i]] > n) {
            NO;
            return;
        }
    }
    YES;


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


