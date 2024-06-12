#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;




void solve(){
    string s;
    cin >> s;
    int n = s.length();
    int l = 0;
    int r = n-1;
    int zeros = count(s.begin(), s.end(), '0');
    int ones = count(s.begin(), s.end(), '1');
    ll total = 0;
    while (l < r) {
        while (l < n && s[l] == '0') {
            l++;
            zeros--;
        }
        while (r >= 0 && s[r] == '1') {
            r--;
            ones--;
        }
        zeros--;
        ones--;
        if (l >= r) break;
        else if (l + 1 == r) {
            total += 1e12;
            swap(s[l], s[r]);
        }else if (ones < zeros) {
            s[r] = '1';
            total += 1e12+1;
        }else {
            s[l] = '0';
            total += 1e12+1;
        }



        cout << l << ' ' << r << ' ' << s <<   '\n';
    }
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
