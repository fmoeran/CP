#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e5+1);
int n, m;
ll a[N];
ll imp[N];
ll sizes[N];
vector<vector<int> > graph;
int parent[N];
struct cmp{
    bool operator()(int x, int y) {
        if (sizes[x] > sizes[y]) return true;
        else if (sizes[x] < sizes[y]) return false;
        else return x < y;
    }
};

set<int, cmp> children[N];


void setGraph(int root) {
    children[root].clear();
    imp[root] = a[root];
    sizes[root] = 1;
    for (int child : graph[root]) {
        if (child == parent[root]) continue;
        parent[child] = root;
        setGraph(child);
        imp[root] += imp[child];
        sizes[root] += sizes[child];
        children[root].insert(child);
    }
}

void rot(int x) {
    int son = *children[x].begin();
    int p = parent[x];
    parent[son] = p;
    parent[x] = son;

    imp[x] -= imp[son];
    imp[son] += imp[x];

    sizes[x] -= sizes[son];
    sizes[son] += sizes[x];

    children[p].insert(son);
    children[p].erase(x);
    children[son].insert(x);
    children[x].erase(son);


}

void solve(){
    cin >> n >> m;
    ito(n) cin >> a[i];
    graph.clear();
    graph.resize(n);
    ito(n-1) {
        int u, v; cin >> u >> v; u--; v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    parent[0] = 0;
    setGraph(0);
    while (m--) {
        int type, x; cin >> type >> x; x--;
        if (type == 1) {
            cout << imp[x] << '\n';
        }else if (children[x].size() > 0) {
            rot(x);
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    //cin >> T;
    while (T--){
        solve();
    }
}
