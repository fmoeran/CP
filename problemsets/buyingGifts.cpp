#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(5e5+1);
int n;
pair<int, int> shops[N];

void solve(){
    cin >> n;
    ito(n) {
        cin >> shops[i].first >> shops[i].second;
    }
    sort(shops, shops+n);

    multiset<int> r;
    vector<int> l;
    int bestL = 0;
    ito(n) r.insert(shops[i].second);
    int best = 1e9+1;
    ito(n-1) {
        r.erase(r.find(shops[i].second));
        int mxB = *r.rbegin();
        int a = shops[i].first;
        best = min(best, abs(a-mxB));
        if (a > mxB && !l.empty()) {
            while (bestL<l.size()-1 && l[bestL] < a) bestL++;
            best = min(best, abs(a-l[bestL]));
            if (bestL != 0) best = min(best, abs(a-l[bestL-1]));
        }

        l.push_back(shops[i].second);
    }
    int a = shops[n-1].first;
    while (bestL<l.size()-1 && l[bestL] < a) bestL++;
    best = min(best, abs(a-l[bestL]));
    if (bestL != 0) best = min(best, abs(a-l[bestL-1]));
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
