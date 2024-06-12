#include<bits/stdc++.h>



using namespace std;

int l, r, x;
int a, b;

void solve(){
    cin >> l >> r >> x;
    cin >> a >> b;

    if (a == b){
        cout << 0 << '\n';
        return;
    }

    int dist = abs(b-a);

    if (dist >= x){
        cout << 1 << '\n';
        return;
    }

    if ((r-b < x && b-l < x) || (r-a < x && a-l < x)){
        cout << -1 << '\n';
        return;
    }
    
    if ((r-b >= x && r-a >= x) || (b-l >= x && a-l >= x)){
        cout << 2 << '\n';
        return;
    }
    cout << 3 << '\n';



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