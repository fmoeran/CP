


#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;


mn(2e5+1);
int n, a[N];


void solve(){
    cin >> n;
    ito(n) {
        cin >> a[i];
    }

    sort(a, a+n);
    int total = 0;
    int current = 0;
    int i = 0;
    while (i < n) {
        if (i != 0 && a[i] != a[i-1]+1) current = 0;
        int num = a[i];
        int c = 1;
        while (a[++i] == num && i < n) c++;
        if (current < c) total += c - current;
        current = c;
    }
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

