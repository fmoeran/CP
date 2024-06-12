#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;

mn(2e5+1);

int n, m, a[N];



void solve(){
    cin >> n >> m;
    ito(n) cin >> a[i];
    m--;
    int c = 0;
    // left of m
    int pt = m;
    ll dif = 0;
    priority_queue<int> pq;

    while (pt > 0) {
        pq.push(a[pt]);
        dif += a[pt];
        if (dif > 0) {
            dif -= (ll)pq.top() * 2;
            pq.pop();
            c++;
        }
        pt--;
    }
    dif = 0;

    while (!pq.empty()) pq.pop();

    for (pt=m+1; pt<n; pt++) {
        pq.push(-a[pt]);
        dif += a[pt];
        if (dif < 0) {
            dif += (ll)pq.top() * 2;
            pq.pop();
            c++;
        }
    }
    cout << c << '\n';




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
