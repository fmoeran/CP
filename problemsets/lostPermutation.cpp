#include<bits/stdc++.h>




using namespace std;

const int mxN = 51;

int m, s, a[mxN];

void solve(){
    cin >> m >> s;
    for (int i=0; i<m; i++ ){
        cin >> a[i];
    }
    int maxNum = *max_element(a, a+m);
    int sum = 0;
    set<int> needed;
    for (int i=1; i<=maxNum; ++i){
        sum += i;
        needed.insert(i);
    }
    for (int i=0; i<m; i++){
        sum -= a[i];
        needed.erase(a[i]);
    }
    int sumAdded = 0;
    
    for (int n: needed){
        sumAdded += n;
    }
    for (int n=maxNum+1; sumAdded < s; n++){
        sumAdded += n;
    }
    
    if (sumAdded == s){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    for (t;t!= 0;t--){
        solve();
    }
}