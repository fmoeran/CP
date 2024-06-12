#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;

mn(1e5+1);
int n, a[N];
bool turned[N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    fill(turned, turned+n, false);


    int r = 0;

    ito(n-1) {
        if (turned[a[i+1]-1] || a[i+1] < a[i]) {
            for (int j=r; j<i+1; j++) {
                turned[a[j]-1] = true;
            }
            r = i+1;
        }
    }

    cout << accumulate(turned, turned+n, 0) << '\n';

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
