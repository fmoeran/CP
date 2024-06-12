#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n;
vector<vector<int>> edges;
vector<map<int, int>> inds;


void solve(){
    cin >> n;
    edges = vector<vector<int>>(n);
    inds = vector<map<int, int>>(n);
    ito(n-1) {
        int a, b; cin >> a >> b; a--; b--;
        edges[a].push_back(b);
        edges[b].push_back(a);
        inds[a][b] = edges[a].size()-1;
        inds[b][a] = edges[b].size()-1;
    }
    int out = 0;
    set<int> drawn;
    vector<int> holding;
    holding.push_back(0);
    drawn.insert(0);
    while (drawn.size() < n) {
        queue<pair<int, int>> starts;
        for (int node : holding) {
            for (int child : edges[node]) {
                if (drawn.find(child) != drawn.end()) break;
                starts.push({child, inds[child][node]});
                drawn.insert(child);
            }
        }
        holding.clear();
        while (!starts.empty()) {
            auto [node, ind] = starts.front();
            holding.push_back(node);
            drawn.insert(node);
            ind++;
            starts.pop();
            for (; ind<edges[node].size(); ind++) {
                int child = edges[node][ind];
                int start = inds[child][node];
                starts.push({child, start});

            }
        }
        out++;
    }
    cout << out << '\n';

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
