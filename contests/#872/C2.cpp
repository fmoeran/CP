#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(1e5+1);
int n, m, a[N];


void solve(){
    cin >> n >> m;
    ito(n) cin >> a[i];

    sort(a, a+n, greater<int>());

    int lefts = count(a, a+n, -1);
    int rights = count(a, a+n, -2);

    vector<bool> taken(m, false);
    int rightTaken = 0;
    ito(n) {
        if (a[i] < 0) break;
        if (!taken[a[i]-1]) rightTaken++;
        taken[a[i]-1] = true;

    }
    int cleft = 0, cright = m-rightTaken;
    int best = min(max(lefts, rights) + rightTaken, m);
    ito(m) {
        if (taken[i]) {
            best = max(best, min(cleft, lefts)+min(cright, rights)+rightTaken);
        }
        else {
            cleft++;
            cright--;
        }
    }
    cout << best << '\n';


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
