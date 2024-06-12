#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;



void solve(){
    string s;
    int k;
    cin >> s;
    cin >> k;
    string out = "";
    int mn = 0;
    ito(s.size()) {
        if (s[i] == '0' && out.size() == 0) continue;
        if (s[i] < s[mn]) mn = i;
        if (k + out.size() <= i + 1) {
            out.push_back(s[i]);
            k++;
        }
        k--;
    }
    cout << out << '\n';

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
