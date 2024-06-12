#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(101);
int n, m;
ll a[N], b[N];


void solve(){
    cin >> n >> m;
    ito(n) cin >> a[i];
    ito(m) cin >> b[i];
    ll sum = 0;
    ito(n) sum += a[i];
    priority_queue<ll, vector<ll>, greater<ll> > heap(a, a+n);
    ito(m) {
        sum -= heap.top();
        sum += b[i];
        heap.pop();
        heap.push(b[i]);
    }
    cout << sum << '\n';


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
