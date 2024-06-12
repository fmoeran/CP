#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;



mn(2e5+2);

int n;
bool used[N];

void solve(){
    cin >> n;
    fill(used, used+n, false);


    ito(n) {
        int mul = i+1;
        while (mul <= n && !used[mul-1]) {
            cout << mul << ' ';
            used[mul-1] = true;
            mul += mul;

        }
    }
    cout << '\n';



}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    cin >> T;
    while (T--){
        solve();
    }
}
