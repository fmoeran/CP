#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
int n, a[N], b[N];

void solve(){
    cin >> n;
    ito(n) {cin >> a[i]; a[i]--;}
    ito(n) {cin >> b[i]; b[i]--;}

    int ind = 0;
    for (; ind < n; ind++) if (a[ind] != b[ind]) break;
    int l = ind-1, r = ind+1;
    for (; l >= 0 && b[l+1] >= b[l]; l--);
    for (; r < n && b[r-1] <= b[r]; r++);
    l++; r--;
    vector<int> acounts(n, 0), bcounts(n, 0);
    for(int i=l; i<=r; i++) {
        acounts[a[i]]++;
        bcounts[b[i]]++;
    }
    while (l<r) {
        if (acounts[b[l]] != bcounts[b[l]] || acounts[a[l]] != bcounts[a[l]]){
            acounts[a[l]]--;
            bcounts[b[l]]--;
            l++;
        }else if (acounts[b[r]] != bcounts[b[r]] || acounts[a[r]] != bcounts[a[r]]){
            acounts[a[r]]--;
            bcounts[b[r]]--;
            r++;
        }else break;
    }
    cout << l + 1 << ' ' << r + 1<< '\n';

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
