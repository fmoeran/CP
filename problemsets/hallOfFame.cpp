#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int mxN = x;

using namespace std;


int n;
char a, b;
void solve(){
    cin >> n;
    string s;
    cin >> s;

    for (int i=0; i<n-1; i++){
        a = s[i];
        b = s[i+1];
        if (a != b){
            if (a == 'R' && b == 'L'){
                cout << 0 << '\n';
            }else{
                cout << i + 1 << '\n';
            }
            return;
        }
    }
    cout << -1 << '\n';
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