#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2001);
int n, a[N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    int maxpos = distance(a, find(a, a+n, n));
    int l, r;
    if (n <= 2) {
        sort(a, a+n);
        ito(n) cout << a[i] << ' ';
        cout << '\n';
        return;
    }

    if (maxpos == 0) {
        maxpos = distance(a, find(a, a+n, n-1));
        l = maxpos-1; r=maxpos-1;
    }else {
        l = maxpos-1;
        int minItem = *min_element(a, a+l);
        while (l > 0) {
            l--;
            if (a[l] == minItem){
                l++;
                break;
            }
        }
        r = maxpos-1;
    }


    if (maxpos == n-1) {
        if (a[n-2] < a[0]) {l=n-1; r=n-1;}
    }
    //cout << l+1 << ' ' << r+1 << '\n';

    for (int i=r+1; i<n; i++) cout << a[i] << ' ';
    for (int i=r; i>=l; i--) cout << a[i] << ' ';
    for (int i=0; i<l; i++) cout << a[i] << ' ';
    cout << '\n';

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
