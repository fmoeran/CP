#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int mxN = x;

using namespace std;


int w, d, h;

int a, b, f, g;

void solve(){
    cin >> w >> d >> h;
    cin >> a >> b >> f >> g;
    int wmin = min(a+f, w-a + w-f);
    int dmin = min(b+g, w-b + w-h);

    int first = abs(a-f) + h + dmin;
    int second = abs(b-g) + h + wmin;

    cout << min(first, second) << '\n';
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