#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e6+3);
int factors[N];

void solve(){
    int n, m;
    cin >> n >> m;
    if (m == 1 || n == 1) {
        YES;
        return;
    }

    if (factors[n] <= m) {
        NO;
    }else {
        YES;
    }


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    fill(factors, factors+N, 1);
    for(int i=2; i*i<N; i++) {
        if (factors[i] != 1) {
            continue;
        }
        factors[i] = i;
        int j = i;
        while (j < N) {
            if (factors[j]==1)factors[j] = i;
            j += i;
        }
    }
    ito(30) cout << factors[i] << '\n';

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
}
