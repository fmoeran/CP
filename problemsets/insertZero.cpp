#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e5+1);
int n, a[N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    if (a[n-1] == 1) {
        NO;
        return;
    }
    YES;
    stack<int> out;
    int current = 0;
    ito(n) {
        if (a[i] == 1) current++;
        else {
            out.push(current);
            jto(current) out.push(0);
            current = 0;
        }
    }
    while (!out.empty()) {
        cout << out.top() << ' ';
        out.pop();
    }
    cout << '\n';


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
