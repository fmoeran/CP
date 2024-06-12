#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(3e5+1);
int n, a[N], s, t;
bool ls[N], lt[N];

void init(bool arr[], int x) {
    ito(n) arr[i] = (__gcd(x, a[i]) != 1);
}

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    cin >> s>> t; s--; t--;
    if (s == t) {
        cout << 1 << '\n' << s+1 << '\n';
        return;
    }else if (__gcd(a[s], a[t]) != 1) {
        cout << 2 << '\n';
        cout << s+1 << ' ' << t+1 << '\n';
        return;
    }else {
        init(ls, a[s]);
        init(lt, a[t]);
        ito(n) {
            if (ls[i] && lt[i]) {
                cout << 3 << '\n';
                cout << s+1 << ' ' << i+1 << ' ' << t+1 << '\n';
                return;
            }
        }
        cout << -1 << '\n';
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
