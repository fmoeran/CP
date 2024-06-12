#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


int n, m;

void solve(){
    cin >> n >> m;
    vector<vector<int> > graph(n, vector<int>());
    vector<pair<int, int> > pairs;
    ito(m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
        pairs.push_back({a, b});
    }

    int minSize = n-1;
    int minInd = -1;
    ito(n) {
        if (minSize > graph[i].size()) {
            minSize = (int) graph[i].size();
            minInd = i;
            break;
        }

    }

    if (minSize == n-1) {
        cout << 3 << '\n';
        for(int i=0; i<m; i++) {
            pair<int, int> p = pairs[i];
            if (p.first == 0 || p.second == 0) {
                if (p.first == 1 || p.second == 1) {
                    cout << 3 << ' ';
                }else {
                    cout << 2 << ' ';
                }
            }else {
                cout << 1 << ' ';
            }
        }
        cout << '\n';
    }else {
        cout << 2 << '\n';
        for(int i=0; i<m; i++) {
            pair<int, int> p = pairs[i];
            if (p.first == minInd || p.second == minInd) {
                cout << 1 << ' ';
            }else {
                cout << 2 << ' ';
            }
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
