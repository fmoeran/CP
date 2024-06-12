#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e5+1);
int a[N];

void solve(){
    int n; cin >> n;
    ito(n) cin >> a[i];
    int points[3] = {0, 1, 2};
    for(int next=3; next<n; next++) {
        ll sum = a[points[0]]+a[points[1]]+a[points[2]];
        int mn = a[points[0]];
        mn = min(mn, a[points[1]]);
        mn = min(mn, a[points[2]]);
        if (a[next] <= mn) continue;
        int lsum = sum-a[points[0]]+a[next]-(next-points[1]);
        int rsum = sum-mn+a[next]-(next-points[0]);
        if (lsum > rsum) {
            points[0] = points[1];
            points[1] = points[2];
            points[2] = next;
        }else {
            if (a[points[0]] == mn) {
                points[0] = points[1];
                points[1] = points[2];
                points[2] = next;
            }else if (a[points[1]] == mn){
                points[1] = points[2];
                points[2] = next;
            }else{
                points[2] = next;
            }
        }
        //ito(3) cout << points[i] << ' ';
        //cout << '\n';
    }
    ll sum = a[points[0]]+a[points[1]]+a[points[2]];
    cout << sum-(points[2]-points[0]) << '\n';

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
