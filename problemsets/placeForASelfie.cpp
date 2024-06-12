#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(1e5+1);
int n, m, k[N];
ll a, b, c;


void solve(){
    cin >> n >> m;
    ito(n) cin >> k[i];
    sort(k, k+n);

    ito(m) {
        cin >> a >> b >> c;
        ll r = 4 * a * c;
        int* guess = lower_bound(k, k+n, (int)b);
        if (*guess != b && distance(k, guess) != 0) {
             if (abs(b - *(guess-1)) < abs(b-*guess)) {
                guess--;
             }
        }
        if (distance(k, guess) == n) {
            guess--;
        }

        ll l = b - *guess;
        if (l*l < r) {
            YES;
            cout << *guess << '\n';
        }else {
            NO;
        }

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
