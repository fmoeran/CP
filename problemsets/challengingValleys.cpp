#include<bits/stdc++.h>




using namespace std;


const int mxN = 2e5+1;

int n, a[mxN];

int l, r;
bool found;
void solve(){
    cin >> n;
    for (int i=0;i<n; i++){
        cin >> a[i];
    }
    l = 0;
    found = false;
    for (r=0; r<n; r++){
        if (a[r] != a[l]){
            l = r;
        } 
        //cout << l << r << '\n';
        if (!(l == 0 | a[l-1] > a[l])){
            continue;
        }
        if (!(r == n-1 | a[r+1] > a[r])){
            continue;
        }
        
        if(!found){
            found = true;
        } else{
            cout << "NO" << '\n';
            return;
        }
    }
    if (found){
        cout << "YES" <<'\n';
    } else{
        
        cout << "NO" <<'\n';

    }


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