#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;

using namespace std;

mn(2e5+1);

int n;
char a[N];

void solve(){
    cin >> n;
    cin >> a;

    int count = 1;
    for (int i=1; i<n-1; i++){
        if (a[i-1] != a[i+1]){
            count++;
        }
    }
    cout << count << '\n';
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