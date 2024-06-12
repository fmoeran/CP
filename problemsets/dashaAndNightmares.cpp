#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


void solve(){
    int n; cin >> n;
    int out = 0;

    vector<multiset<int> > counts(26);

    ito(n) {
        string s; cin >> s;
        bitset<26> b, contains;
        for (char c : s) {
            b.flip((int)(c-'a'));
            contains.set((int)(c-'a'));
        }
        ito(26) {
            if (contains[i]) continue;
            bitset<26> wanted((1<<i));
            wanted = ~wanted;
            out += counts[i].count((int)(wanted ^ b).to_ullong());
            counts[i].insert((int)b.to_ullong());
        }
    }
    cout << out << '\n';


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
}
