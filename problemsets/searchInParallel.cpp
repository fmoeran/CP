#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)


using namespace std;


mn(2e5+1);
int r[N], inds[N];

bool lt(int x, int y) {
    return r[x] > r[y];
}

void solve(){
    vector<int> a, b;
    int n, s1, s2;
    cin >> n >> s1 >> s2;
    ito(n) cin >> r[i];
    ito(n) inds[i] = i;
    sort(inds, inds+n, lt);
    ito(n) {
        if ((a.size() + 1) * s1 < (b.size() + 1) * s2) {
            a.push_back(inds[i]+1);
        }else{
            b.push_back(inds[i]+1);
        }
    }
    cout << a.size();
    ito(a.size()) cout << ' ' << a[i];
    cout << '\n';
    cout << b.size();
    ito(b.size()) cout << ' ' << b[i];
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
