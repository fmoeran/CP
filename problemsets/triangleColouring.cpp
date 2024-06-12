#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;

mn(3e5+1);

int n, trips[N/3][3];
const int MOD = 998244353;



int mult(int x, int y) {
    return x * 1ll * y % MOD;
}

int binpow(int x, int y) {
    if (y == 1) return x;
    int out = binpow(x, y/2);
    out = mult(out, out);
    if (y%2 == 1) out = mult(out, x);
    return out;
}

int inverse(int x){
    binpow(x, MOD-2);
}

int fact(int x) {
    int out = 1;
    for (int i=1; i<=x; i++) {
        out = mult(out, i);
    }
    return out;
}

void solve(){
    cin >> n;
    int sixthFact = fact(n/6);
    int out = mult(fact(n/3), inverse(mult(sixthFact, sixthFact)));

    ito(n/3) {
        int trip[3];
        cin >> trip[0] >> trip[1] >> trip[2];
        int mn = *min_element(trip, trip+3);
        int mnCount = count(trip, trip+3, mn);
        out = mult(out, mnCount);

    }
    cout << out << '\n';


}


int main(){
    solve();
}
