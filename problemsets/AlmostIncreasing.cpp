#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(2e5+1);
int n, q, a[N], l, r;


void solve(){
    cin >> n >> q;
    ito(n) cin >> a[i];
    vector<int> starts;
    ito(n-2) {
        if (a[i] >= a[i+1] && a[i+1] >= a[i+2]) starts.push_back(i);
    }
    while (q--) {
        cin >> l >> r;
        vector<int>::iterator start = lower_bound(starts.begin(), starts.end(), l);
        cout << *start << '\n';
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
