#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;


mn(5e5+1);

int n, p[N];

void solve(){
    cin >> n;
    ito(n) cin >> p[i];
    int fcount = 0;
    int scount = 0;
    ito(n) {
        if (p[i] == i+1) fcount++;
        if (p[n-1-i] == i+1) scount++;
    }

    if (fcount > scount && fcount >= (n+1)/2) {
        cout << "First" << '\n';
    }else if (scount > fcount && scount > n/2) {
        cout << "Second" << '\n';
    }else {
        cout << "Tie" << '\n';
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
