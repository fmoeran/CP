#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;



void solve(){
    int n;
    cin >> n;
    int num;
    int best = 0;
    for (int i=1; i<=n; i++){
        cin >> num;
        int dist = abs(num-i);
        if (dist == 0) continue;
        if (best == 0) best = dist;
        else best = min(best, __gcd(dist, best));
        //cout << best << ' ';

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
