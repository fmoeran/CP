#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e7+1);
int n;
bool primes[N];

void solve(){
    ll prod = 1;
    cin >> n;
    ito(n)
    {
        ll num; cin >> num; prod *= num;
    }
    ll change = prod;
    ll out = 0;
    ll extra = 0;
    for(int i=2; i*i<=prod; i++) {
            cout << i << '\n';
        int c = 0;
        while (change%i == 0) {
            change /= i;
            c++;
        }
        out += c/2;
        extra += c%2;
    }
    cout << extra << ' ' << out << ' ';
    out += extra/3;
    cout << out << '\n';

}


int main(){
    //ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
}
