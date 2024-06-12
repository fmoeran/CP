#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;

using namespace std;

mn(2e5+1);

int n, k, d, w, a[N];


void solve(){
    cin >> n >> k >> d >> w;
    for (int i =0; i<n; i++){
        cin >> a[i]-1;
    }
    queue<int> q;
    int current = 0;
    int total = 0;
    for (int i=0; i<n; i++){
        q.push(a[i]);
        if (current > 0) {
            q = queue<int>();
            current--;
        } else{
            if (i - q.front() == w){
                current = d;
                total++;
                q = queue<int>();
            }
        }
    }
    cout << total << '\n';


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
