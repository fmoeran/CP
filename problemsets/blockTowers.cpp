#include<bits/stdc++.h>


#define ll long long

using namespace std;



const int mxN = 2e5+1;
int n;
ll int a[mxN];
ll int first;

void solve(){
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> a[i]; 
    }
    first = a[0];
    sort(a+1, a+n);
    for (int i=1; i<n; i++){
        if (a[i] <= first){
            continue;
        }
        first += ceil(((double)a[i]-first)/2);
    }
    cout << first << '\n';

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