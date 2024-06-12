#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int key[5] = {1, 10, 100, 1000, 10000};

void solve(){
    string s; cin >> s;
    vector<int> vals;
    for (char c : s) {
        vals.push_back(key[c-'A']);
        //cout << vals.back() << ' ';
    }
    int best = 0;
    int mx = 0;
    for (int i=vals.size()-1; i>=0; i--) {
        mx = max(mx, vals[i]);
        if (mx <= vals[i]) best += vals[i];
        else best -= vals[i];
    }
    int bestChange = 0;
    mx = 0;
    for (int i=vals.size()-1; i>=0; i--) {
        mx = max(mx, vals[i]);
        if (mx > vals[i]) continue;
    }



}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    cin >> T;
    while (T--){
        solve();
    }
}
