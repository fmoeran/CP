#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;

mn(1e5+1);
int n, a[N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    queue<int> q;
    for (int i=0; i<n; i++) {
        int num = a[i];
        q.push(num);
        while (!q.empty()) {
            if (q.front() < q.size()) q.pop();
            else break;
        }
        cout << q.size() << ' ';
    }
    cout << '\n';

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
