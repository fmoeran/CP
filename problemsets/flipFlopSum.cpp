#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)


using namespace std;


mn(2e5+1);
int n, a[N];


void solve(){
    cin >> n;
    ito(n) cin >> a[i];

    int sum = accumulate(a, a+n, 0);
    bool dneg = false;
    bool neut = false;
    ito(n-1) {
        if (a[i] == -1 && a[i+1] == -1){
            dneg = true;

            break;
        }else if (a[i] != a[i+1]) {
            neut = true;
        }
    }
    if (dneg) {
        cout << sum + 4 << '\n';
    }else if (neut) {
        cout << sum << '\n';
    }else {
        cout << sum-4 << '\n';
    }


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
