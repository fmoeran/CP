#include<bits/stdc++.h>



using namespace std;

int a, b, c;

void solve(){
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    sort(arr, arr+3);
    cout << arr[1] << '\n';

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