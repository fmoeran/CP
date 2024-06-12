#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n, m;
vector<vector<int> > graph;


vector<int> getCycle(int node) {
    unordered_set<int> seen({node});
    vector<int> cycle({node});
    while (cycle.size() > 0) {
        vector<int> neighbours = graph[cycle.back()];
        if (cycle.size() > 2 && find(neighbours.begin(), neighbours.end(), node) != neighbours.end()) {
            cycle.push_back(node);
            return cycle;
        }
        bool found = false;
        for (int nextNode : graph[cycle.back()]){
            if (seen.find(nextNode) != seen.end()) continue;
            found = true;
            seen.insert(nextNode);
            cycle.push_back(nextNode);
            break;
        }
        if (!found) cycle.pop_back();
    }
    return vector<int>();
}

void solve(){
    graph.clear();
    cin >> n >> m;
    graph = vector<vector<int> >(n, vector<int>());
    ito(m) {
        int a, b; cin >> a >> b; a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    ito(n) {
        vector<int> links = graph[i];
        if (links.size() < 4) continue;
        vector<int> cycle = getCycle(i);
        if (cycle.size() == 0) continue;
        YES;
        cout << cycle.size() + 1 << '\n';

        int c = 0;
        for (int j=0; j<links.size() && c!=2; j++) {
            if (links[j] == cycle[1] || links[j] == cycle[cycle.size()-2]) continue;
            c++;
            cout << links[j] + 1 << ' ' << i + 1 << '\n';
        }
        jto(cycle.size()-1) {
            cout << cycle[j] + 1 << ' ' << cycle[j+1] + 1 << '\n';
        }

        return;
    }
    NO;

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
