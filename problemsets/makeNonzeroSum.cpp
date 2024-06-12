#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
int n, a[N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    int sum = accumulate(a, a+n, 0);
    if (sum%2 == 1) {
        cout << -1 << '\n';
        return;
    }
    int change = 0;
    if (sum > 0) change = 1;
    else if (sum < 0) change = -1;
    vector<pair<int, int> > pairs;
    for(int i=0; i<n; i++) {
        if (i != n-1 && a[i+1] == change && sum != 0) {
            pairs.push_back(make_pair(i, i+1));
            i++;
            sum -= change + change;
        }else {
            pairs.push_back(make_pair(i, i));
        }
    }

    if (sum != 0) {
        cout << -1 << '\n';
        return;
    }
    cout << pairs.size() << '\n';
    for (pair<int, int> p : pairs) {
        cout << p.first+1 << ' ' << p.second+1 << '\n';
    }

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
