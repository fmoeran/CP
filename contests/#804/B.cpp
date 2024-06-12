#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;




void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > mat(n, vector<int>(m, 0));

    int s = min(n, m);
    ito(s) {
        int j = 0;
        while (j <= i) {
            mat[i][j] = 1 - i%2;
            j++;
        }
        while (j < m-i) {
            mat[i][j] = 1-mat[i][j-1];
            j++;
        }
        while (j < m) {
            mat[i][j] =  i%2;
            j++;
        }
    }
    if (m/2 == s) {
        for (int i=s; i<n-s; i++) {
            //cout << i << '\n';
            jto(m) {
                mat[i][j] = 1 - mat[i-1][j];
            }
        }
    }


    ito(n) {
        jto(m) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
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
