#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n;
ll counts[26], pairs[26];
string s;

void solve(){
    fill(counts, counts+26, 0);
    fill(pairs, pairs+26, 0);

    cin >> n >> s;
    ito(n) {
        int ind = s[i]-'a';
        counts[ind]++;
    }
    if (*max_element(counts, counts+26) > n/2 || n%2 == 1) {
        cout << -1 << '\n';
        return;
    }

    ito(n/2) {
        int r = n-i-1;
        if (s[i] == s[r]) {
            pairs[s[i]-'a']++;
        }
    }

    sort(pairs, pairs+26, greater<ll>());
    ll c = accumulate(pairs, pairs+26, 0);
    ll val = 0;
    ito(26) {
        val = abs(val - pairs[i]);
    }


    cout << val + (c-val)/2 << '\n';
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
