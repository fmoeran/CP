#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;

using namespace std;


mn(1e5+1);
int n, a[N];



void solve(){
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int gcount = 0;
    int acount = 0;
    int free = 0;
    for (int i=0; i<n; i++){
        if (a[i] == 1){
            gcount++;
            if (free == 0){
                acount++;
            }else{
                free--;
            }
        }else{
            int m = gcount % 4;
            if (m == 0){
                free = acount - gcount/2;
            }else if (m < 3){
                free = acount - gcount/2 - 1;
            } else{
                free = acount - (gcount-3)/2 - 2;
            }
        }
        cout << acount << free << ' ';
    }
    cout << acount << '\n';

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
