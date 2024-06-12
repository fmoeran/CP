#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;

mn(2e5+1);


int n, a[N];
bool seen[N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];

    sort(a, a+n);
    fill(seen, seen+n, false);

    int l, r;
    l = 0;
    r = n-1;
    while (l < r){
        int newSum = a[l] + a[r];
        cout << a[l] << ' ' << a[r] << ' ';
        seen[newSum] = true;
        if (l > n-r-1){
            r--;
        }else{
            l++;
        }
    }

    ito(n) {
        if (!seen[i]) {
            cout << i << '\n';
            break;
        }
    }



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
