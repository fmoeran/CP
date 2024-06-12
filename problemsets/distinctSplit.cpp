#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;


int n;
mn(2e5+1);
char s[N];
int counta[26];
int countb[26];

void solve(){
    cin >> n;
    cin >> s;
    fill(counta, counta+26, 0);
    fill(countb, countb+26, 0);
    ito(n) countb[s[i]-'a']++;
    int mx = 0;
    int current = 0;
    ito(26) if (countb[i]) current++;
    ito(n) {
        char c = s[i];
        int ind = c-'a';
        countb[ind]--;
        counta[ind]++;
        if (countb[ind] == 0) current--;
        if (counta[ind] == 1) current++;
        mx = max(mx, current);
    }
    cout << mx << '\n';








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
