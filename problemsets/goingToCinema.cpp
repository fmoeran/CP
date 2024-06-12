#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;

mn(2e5+1);
int n, a[N];



void solve(){
    cin >> n;
    ito(n) cin >> a[i];

    sort(a, a+n);
    int i = n-1;
    int total = 1;
    while (i > 0) {
        if (!( a[i] <= i || a[i-1] > i-1 )) {
            total++;
        }
        i--;
    }
    if (a[0] > 0) total++;
    cout << total << '\n';

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
