#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(1e6+1);
int counts[N], perms[N];
const int md = 998244353;

void solve(){
    int l, r;
    cin >> l >> r;

    fill(counts+l, counts+r+1, 1);
    fill(perms+l, perms+r+1, 1);
    for (int i=l; i<=r/2; i++) {
        int j = i;
        while (j + j <= r) {
            counts[i]++;
            j += j;
        }
    }


    for (int i=r/2; i>=l; i--) {
        int c = counts[i];
        int j = i + i;
        perms[i] = 0;
        while (j <= r && counts[j] == c-1) {
            perms[i] = (perms[i] * 1L + perms[j]) % md;

            j += i;
        }
        if (perms[i] == 0) perms[i] = 1;

    }
    int total = 0;
    int mx = counts[l];
    for (int i=l; i<=r; i++) {
        if (counts[i] != mx) break;
        total = (total * 1L + perms[i]) % md;
    }
    cout << mx << ' ' << total << '\n';

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
