#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
int n;


void solve(){
    map<int, int> counts;
    cin >> n;
    ito(n) {
        int num;
        cin >> num;
        if (counts.find(num) == counts.end()) {
            counts.emplace(pair<int, int>(num, 1));
        }else {
            int val = counts.at(num);
            counts.erase(num);
            counts.emplace(pair<int, int>(num, val+1));
        }
    }
    ll best = 0;
    int total = 0;
    for (pair<int, int> p : counts) {
        total += p.second;
        best = max(best, total * 1L * (ll)(n-total));
    }
    if (best == 0) {
        cout << n/2 << '\n';
    }else {
        cout << best << '\n';
    }

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
