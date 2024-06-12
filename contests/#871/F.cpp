#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n, m;
vector<vector<int> >graph;

void solve(){
    cin >> n >> m;
    graph = vector<vector<int> >(n);
    ito(m) {
        int a, b; cin >> a >> b; --a; --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int x = 0;
    int y = 0;
    for (auto vec: graph) {
        if (vec.size() == 1) {
            y = graph[vec[0]].size()-1;
            for (auto child : graph[vec[0]]) {
                if (graph[child].size() != 1) x = graph[child].size();
            }
            break;
        }
    }


    cout << x << ' ' << y << '\n';
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
}
