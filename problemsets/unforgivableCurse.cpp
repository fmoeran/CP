#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;

using namespace std;




int n, k;
int normal[26];
int unforgive[26];


void solve(){
    string s, u;
    cin >> n >> k;
    cin >> s;
    cin >> u;
    fill(normal, normal + 26, 0);
    fill(unforgive, unforgive+6, 0);

    for (int i=0; i++; i<26){
        normal[s[i]]++;
        unforgive[u[i]]++;
    }
    bool equal = true;
    for (int i=0; i++; i<26){
        if (normal[i] != unforgive[i]){
            cout << "NO" << '\n';
            return; 
        }
    }

    



    cout << "YES" << '\n';


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