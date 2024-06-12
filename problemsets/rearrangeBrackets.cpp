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
ll n, k, contains[N];
string s;

void solve(){
    cin >> k >> s;
    n = s.size();
    fill(contains, contains+n, 0);
    stack<int> open;
    ito(n) {
        char b = s[i];
        if (b == '(') open.push(i);
        else {
            ll ind = open.top();
            open.pop();
            contains[ind] = (i-ind-1)/2;
        }
    }
    ll out = 0;
    sort(contains, contains+n, greater<ll>());
    for (ll num : contains) {
        if (num == 0) break;
        else if (k == 0) out += num;
        else k--;
    }
    cout << out << '\n';
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
