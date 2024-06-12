#include<bits/stdc++.h>


#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;


mn(101);
int n, a[N][N-1], counts[N], p[N];


bool cmp(int x, int y) {
    return counts[x] < counts[y];
}


void solve(){
    cin >> n;
    fill(counts, counts+n, 0);
    ito(n) {
        for(int j=0; j<n-1; j++) {
            cin >> a[i][j];
            counts[a[i][j]-1] += j;
            //cout << counts[a[i][j]] << ' ';
        }
    }
    ito(n) {
        p[i] = i;
    }
    sort(p, p+n, cmp);
    ito(n) {
        cout << p[i] + 1<< ' ';
    }
    cout << '\n';




}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    for (t; t!= 0; t--){
        solve();
    }
}
