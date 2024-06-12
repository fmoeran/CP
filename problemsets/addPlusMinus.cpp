#include<bits/stdc++.h>

#define ll long long
#define setMax(x) const ll int mxN = x

using namespace std;




int n;
string a;


void solve(){
    cin >> n;
    cin >> a;

    string out;
    char current = '-';
    char altCurrent = '+';
    char c;
    for (int i=1; i<n; i++){
        c = a[i];
        if (c == '0'){
            out.push_back('-');
        } else{
            out.push_back(current);
            swap(current, altCurrent);
        }
    }
    cout << out << '\n';


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