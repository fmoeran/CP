#include<bits/stdc++.h>


using namespace std;

string alpha = "abcdefghijklmnopqrstuvwxyz";
unordered_map<char, int> m;
int x;
string s;

void solve(){
    cin >> x;
    cin >> s;
    int max = m[s[0]];
    int val;
    for (char c : s){
        val = m[c];
        if (val > max){
            max = val;
        }

    }
    cout << max+1 << '\n';

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    for (int i=0; i<26; i++){
        m[alpha[i]] = i;
    }

    int t;
    cin >> t;
    for (t; t!=0; t--){
        solve();
    }
}