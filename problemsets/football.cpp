#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int mxN = x;

using namespace std;


int n, a, b;


void solve(){
    cin >> n >> a >> b;

    if (n == 1){
        cout << (int) (a == b) << '\n';
        cout << a << ':' << b << '\n';
        return;
    }
    cout << max(0, n - a - b) << '\n';

    for (int i=0; i<n-2; i++){
        if (a){
            cout << "1:0" << '\n';
            a--;
        } else if  (b) {
            cout << "0:1" << '\n';
            b--;
        }else {
            cout << "0:0"<< '\n';
        }
    }
    if (a){
        cout << a << ":0" << '\n';
    } else if (b){
        cout << "0:1" << '\n';
        b--;
    } else{
        cout << "0:0" << '\n';
    }
    cout << "0:" << b << '\n';


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    solve();
    
}