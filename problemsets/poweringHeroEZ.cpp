#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;

using namespace std;


mn(2e5+1);

int a[N];
int n;


void solve(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    
    ll power = 0;
    priority_queue<int> pq;
    
    for (int i=0; i<n; i++){
        if (a[i] > 0){
            pq.push(a[i]);
        }else if (!pq.empty()){
            power += pq.top();
            pq.pop();
        }
    }
    cout << power << '\n';
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