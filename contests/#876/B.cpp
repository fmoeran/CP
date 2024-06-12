#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
int n;
pair<ll, ll> lamps[N];

class cmp {
    public:
    bool operator()(pair<ll, ll> x, pair<ll, ll> y) {
        if (x.second > y.second) return true;
        if (x.second == y.second) return x.first > y.first;
        return false;
    }
};


void solve(){
    cin >> n;
    ito(n) cin >> lamps[i].first >> lamps[i].second;
    sort(lamps, lamps+n);
    ll total = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp > heap;
    ito(n) {
        pair<ll, ll> p = lamps[i];
        if (heap.size() < p.first) {
                cout << 'h';
            heap.push(p);
            total += p.second;
        }else if (heap.top().second < p.second) {
            total -= heap.top().second;
            total += p.second;
            heap.pop();
            heap.push(p);
        }
        cout << total << ' ';
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
