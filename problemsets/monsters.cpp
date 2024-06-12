#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
int n, m, a[N], parent[N], sizes[N];
set<int> seen;
vector<vector<int>> graph;

bool possible(int root){
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int>> > pq;
    set<int> holding, reachable;
    pair<int, int> rootpair = make_pair(a[root], root);
    pq.push(rootpair);
    holding.insert(root);
    while(!pq.empty()){
        auto node = pq.top();
        pq.pop();
        if (node.first > reachable.size()) {
            return false;
        }
        reachable.insert(node.second);

        for (auto child : graph[node.second]) {
            if (holding.find(child) != holding.end()) continue;
            pq.push(make_pair(a[child], child));
            holding.insert(child);
            seen.insert(child);
        }
    }

    return holding.size() == n;
}

void solve(){
    cin >> n >> m;
    graph = vector<vector<int>>(n);
    ito(n) cin >> a[i];
    ito(m) {
        int a, b; cin >> a >> b; a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    seen.clear();
    ito(n){
        if (a[i] == 0 && seen.find(i) == seen.end() && possible(i)) {
            YES;
            return;
        }
    }
    NO;



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
