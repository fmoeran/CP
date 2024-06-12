#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int mxN = x;

using namespace std;

mn(2e5+1);
int n, k;
char s[mxN];
int lowers[26], uppers[26];

void solve(){
    
    cin >> n >> k;
    cin >> s;
    fill(lowers, lowers + 26, 0);
    fill(uppers, uppers + 26, 0);
    for (int i=0; i<n; i++){
        char c = s[i];
        if (c >= 'a'){
            lowers[(int) c-'a']++;
        } else {
            uppers[(int) c-'A']++;
        }
    }
    int pairs = 0;
    for (int i=0; i<26; i++){
        int l = lowers[i];
        int u = uppers[i];
        int maxi = max(l, u);
        int mini = min(l, u);
        pairs += mini;
        int average = (maxi + mini) / 2;
        int m = min(k, average - mini);
        pairs += m;
        k -= m;
    }
    cout << pairs << '\n';
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