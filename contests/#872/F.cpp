#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(1e5+1);
int n, a[N], out;
vector<vector<int> > graph;

int getWanted(int root, int prev) {
    if (graph[root].size() <= 1 && prev != -1) return 0;
    map<int, int> counts;
    for (int child : graph[root]) {
        if (child == prev) continue;
        int val = getWanted(child, root) ^ a[child];
        if (counts.find(val) == counts.end()) counts.insert(make_pair(val, 1));
        else {
            int cnt = counts.at(val);
            counts.erase(val);
            counts.insert({val, cnt+1});
        }
    }
    pair<int, int> mode = {0, 0};
    for(auto p : counts) {
        if (p.second > mode.second) {
            mode.first = p.first; mode.second = p.second;
        }
    }
    out += graph[root].size() - 1 - mode.second;
    if (prev == -1) out++;
    return mode.first;



}


void solve(){
    out = 0;
    cin >> n;
    graph = vector<vector<int>>(n);
    ito(n) cin >> a[i];
    ito(n-1) {
        int a, b; cin >> a >> b; a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int ret = getWanted(0, -1);
    if (ret != a[0]) {
        out++;
    }
    cout << out << '\n';
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
}
