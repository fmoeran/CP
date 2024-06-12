#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(2e5+1);
int n, k, num, mx;




void solve(){
    cin >> n;
    vector<vector<int> > vec;
    ito(n) {
        cin >> k;
        vec.push_back(vector<int>());
        mx = 0;
        while(k--){
            cin >> num;
            if(num > mx) {
                mx = num;
                vec[vec.size()-1].push_back(num);
            }
        }
    }




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
