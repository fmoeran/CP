#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n, a, b;
vector<vector<pair<int, int>> > graph;
set<int> wanted;
bool found;

void makeWanted(int root, int des, int prev) {
    for (pair<int, int> child : graph[root]) {
        if (child.first == prev) continue;
        wanted.insert(des^child.second);
        makeWanted(child.first, des^child.second, root);
    }
}

void dfs(int root, int curr, int prev) {
    if (root == b) return;
    if (wanted.find(curr) != wanted.end()) {
        found = true;
    }
    for (auto child : graph[root]) {
        if (found) return;
        if (child.first == prev) continue;
        dfs(child.first, curr^child.second, root);
    }
}

void solve(){
    cin >> n >> a >> b;
    a--; b--;
    graph = vector<vector<pair<int, int> > >(n);
    wanted.clear();
    found = false;
    ito(n-1) {
        int x, y, w; cin >> x >> y >> w; x--; y--;
        graph[x].push_back(make_pair(y, w));
        graph[y].push_back(make_pair(x, w));
    }

    makeWanted(b, 0, -1);

    dfs(a, 0, -1);
    if (found) YES;
    else  NO;
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
