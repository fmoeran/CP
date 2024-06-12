#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;
mn(2e5+1);
int times[N];

void solve(){
    string s; cin >> s;
    int mn = N;
    ito(26) {
        char c = (char)('a' + i);
        int l = -1;
        jto(s.size()) {
            if (s[j] == c) {
                l = j;
                break;
            }
        }
        if (l == -1) continue;
        int r = l+1;
        int mx = l;
        while (r < s.size()) {
            if (s[r] == c) {
                mx = max(mx, r-l-1);
                l = r;
            }
            r++;
        }
        mx = max(mx, (int)s.size()-l-1);
        mn = min(mn, times[mx]);
    }
    cout << mn << '\n';

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    times[0] = 0;
    times[1] = 1;
    for(int i=2; i<N; i++) {
        times[i] = 1 + times[i/2];
    }


    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
