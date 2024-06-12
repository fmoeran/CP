#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;

using namespace std;


string s = "codeforces";
char c;
void solve(){
    cin >> c;

    for (int i=0; i<s.length(); i++){
        char l = s[i];
        if (l == c) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}


int main(){

    int t;
    cin >> t;
    for (t; t!= 0; t--){
        solve();
    }
}
