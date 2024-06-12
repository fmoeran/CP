#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)


using namespace std;


mn(1e5+1);
int n, c, d, a[N];


void solve(){
    cin >> n >> c >> d;
    ito(n) cin >> a[i];
    set<int> seen;

    ll total = 0;
    ito(n) {
        if (seen.find(a[i]) != seen.end()){
            total += c;
        }else {
            seen.insert(a[i]);
        }
    }
    n = seen.size();
    set<int>::iterator itr = seen.begin();
    for (int i=0; itr != seen.end(); itr++, i++){
        a[i] = *itr;
    }
    ll missing = a[0]-1;
    ito(n-1) {
        missing += a[i+1] - a[i] -1 ;
    }
    int i = n-1;
    ll r = 0;
    while (i >= 0 && r * c < missing * d) {
        r++;
        ll dif = a[i] - a[i-1] - 1;
        missing -= dif;
        i--;
    }
    i++;
    if (i == 0) {
        cout << total + r * c << '\n';
        return;
    }
//    while (i < n-1 && a[i] + 1 == a[i+1]) {
//        i++;
//        r--;
//    }

    cout << i << ' ';
    cout << r << ' ';
    //total += missing * d;
    //total += r * c;
    cout << total << '\n';



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
