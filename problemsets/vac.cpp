#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;

using namespace std;

mn(2e5+1);

int n, k, d, w, a[N];


void solve(){
    cin >> n >> k >> d >> w;
    for (int i =0; i<n; i++){
        cin >> a[i];
        a[i]--;
    }
    queue<int> q;
    int currentDuration = 0;
    int currentDoses = 0;
    int total = 0;
    for (int i=0; i<n; i++){
        q.push(a[i]);
        cout << currentDuration << ' ';
        if (currentDuration > 0) {
            while (!q.empty() && currentDoses > 0){
                q.pop();
                currentDoses--;
            }
            currentDuration--;
            if (q.empty()) continue;
        }


        if (i - q.front() == w){
            currentDuration = d;
            currentDoses = k;
            total++;
            while (!q.empty() && currentDoses > 0){
                q.pop();
                currentDoses--;
            }
            currentDuration--;
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
