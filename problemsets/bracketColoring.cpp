#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n;
string s;
vector<int> colours;

void solve(){
    cin >> n >> s;
    stack<int> open, close;
    colours.clear();
    colours.resize(n);
    ito(n) {
        char c = s[i];
        if (c == '(') {
            if (close.empty()) {
                open.push(i);
            }else {
                colours[i] = 2;
                colours[close.top()] = 2;
                close.pop();
            }
        }else {
            if (open.empty()) {
                close.push(i);
            }else {
                colours[i] = 1;
                colours[open.top()] = 1;
                open.pop();
            }
        }
    }
    if (count(all(colours), 0)) {
        cout << -1 << '\n';
    }else {
        if (count(all(colours), 2) == n || count(all(colours), 1) == n)  {
            cout << 1 << '\n';
            ito(n) cout << 1 << ' ';
        }
        else {
            cout << 2 << '\n';
            ito(n) cout << colours[i] << ' ';
        }
        cout << '\n';
    }

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
}
