#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

const ll m = 1e9+7;
int n, k;
ll counts[64];

void solve(){
    fill(counts, counts+64, 0);
    cin >> n >> k;
    ll total = 0;
    ito(n) {
        int num; cin >> num;
        //cout << num << ' ';
        jto(64) {
            counts[num&j] = (counts[num&j] + counts[j])%m;
        }

        counts[num]++;

    }
    total = 0;
    ito(64) {
        if (__builtin_popcount(i) == k) total = (total + counts[i])%m;
    }
    cout << total << '\n';


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
