#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(200001);
ll n, a[N];

int getstart(ll x) {
    ito(n) {
        if (a[i] == x) return i;
    }
    return -1;
}

int getend(ll x) {
    int i = n-1;
    while (i != -1) {
        if (a[i] == x) return i;
        i--;
    }
    return -1;
}


void solve(){
    cin >> n;
    set<int> s;
    s.clear();
    ito(n) {
        cin >> a[i];
        s.insert(a[i]);
    }
    ll mx = *max_element(a, a+n);
    ll mex = 0;
    while (s.find(mex) != s.end()) mex++;
    if (s.find(mex+1) == s.end()) {
        if (mex > mx) {
            if (s.size() == n) {
                NO;
            }else {
                YES;
            }
        }else {
            YES;
        }
    } else {
        int l = getstart(mex+1);
        int r = getend(mex+1);

        for (int i=l; i<=r; i++) {
            a[i] = mex;
        }
        s.clear();
        ito(n) s.insert(a[i]);
        ll newmex = 0;
        while (s.find(newmex) != s.end()) newmex++;
        if (newmex == mex+1) YES;
        else NO;
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
