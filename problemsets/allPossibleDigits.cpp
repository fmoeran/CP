#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(101);
int n, p, a[N];

void solve(){
    set<int> seen;
    cin >> n >> p;
    ito(n) {cin >> a[i]; seen.insert(a[i]);}
    if (seen.size() == p) {
        cout << 0 << '\n';
        return;
    }
    if (a[n-1] == p-1) {
        int i = n-1;
        while (i>=0 && a[i] == p-1) i--;
        if (i<0) {
            if (p == 3) cout << 1 << '\n';
            else cout << p-1 << '\n';
            return;
        }
        seen.insert(a[i]+1);
        seen.insert(0);

        if (n>1 && a[n-1] == p-1) a[n-2] = 0;
    }
    a[n-1] = (a[n-1]+1)%p;
    seen.insert(a[n-1]);
    if (seen.size() == p) {
        cout << 1 << '\n';
        return;
    }
    int lowest = a[n-1];
    for (int i=0; i<seen.size()&& seen.find(lowest) != seen.end(); i++, lowest=(lowest-1+p)%p);

    int change;
    if (lowest > a[n-1]) change = lowest-a[n-1];
    else {
        change = lowest + p - a[n-1];
        if (n > 1 && a[n-2] == lowest-1) change--;
    }

    cout << change + 1 << '\n';



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
