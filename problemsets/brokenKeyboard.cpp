#include<bits/stdc++.h>

using namespace std;

void solve(){
    int l;
    string s;
    cin >> l;
    cin >> s;
    if (l%3 == 2){
        cout << "NO" << endl;
        return;
    }

    for (int i=0, c=0; i<l-1; ++i, ++c){
        if (c%2 == 1){
            if (s[i] != s[i+1]){
                cout << "NO" << endl;
                return;
            }
            ++i;
        }
    }
    cout << "YES" << endl;

}


int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    for (cin >> t; t!= 0; --t){
        solve();
    }
}