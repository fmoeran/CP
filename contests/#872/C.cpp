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

    vector<int> taken;
    ito(n) {
        if (a[i] < 0) break;
        if (!taken.empty() && taken.back() == a[i]) continue;
        taken.push_back(a[i]);

    }
    if (taken.empty()) {
        cout << min(rights + lefts, m) << '\n';
        return;
    }
    unordered_set<int> holding(taken.begin(), taken.end());
    int m1 = 0, m2 = 0;
    m1 += min(rights, m - taken.back());
    rights -= m1;
    for(int i=taken.size()-1; i>0&&rights>0; i--) {
        int dif = taken[i] - taken[i-1]-1;
        dif = min(dif, rights);
        m1 += dif;
        rights -= dif;
        holding.erase(taken[i]);
    }


    m2 = min(lefts, taken[0]-1);
    lefts -= m2;

    for(int i=0; i<taken.size()-1&&lefts>0; i++) {
        int dif = taken[i+1] - taken[i] - 1;
        dif = min(dif, lefts);
        m2 += dif;
        lefts -= dif;
        holding.erase(taken[i]);
    }


    //cout << m1 << ' ' << m2 << ' ' << holding.size() << '\n';
    int r1 = m1 + m2;
    int r2 = m1 + min(rights, taken[0]-1);
    int r3 = m2 + min(lefts, m-taken.back());
    cout << min(max({r1, r2, r3}) + (int)holding.size(), m) << '\n';





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
