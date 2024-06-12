#include <bits/stdc++.h>


#define ll long long;
#define ar array;

using namespace std;

const int mxN = 2e5+1;
int n, a[mxN];

void solve(){
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    int max = *max_element(a, a+n);
    int c[mxN];
    copy(a, a+n, c);
    sort(a, a+n);
    int score;
    for (int i=0; i<n; ++i){
        score = c[i];
        if (score == max){
            cout << score-a[n-2] << " ";
        } else{
            cout << score-a[n-1] << " ";
        }
    }
    cout << '\n';

    
    




}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;

    for (t; t!=0; t--){
        solve();
    }
}