#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

const int inf = 2e5+10;
int n;
vector<vector<int> > graph;
vector<int> colours;
vector<pair<int, int> >dists;

void updatePair(pair<int, int>& p, int x) {
    p.second = max(p.second, x);
    if (p.second > p.first) swap(p.first, p.second);
}

void makeDists(int root, int prev) {
    for(int child : graph[root]) {
        if (prev == child) continue;
        makeDists(child, root);
        updatePair(dists[root], dists[child].first+(int)(colours[child]!=colours[root]));
    }
}

void updateDists(int root, int prev, int best) {
    updatePair(dists[root], best);
    for(int child : graph[root]) {
        if (child == prev) continue;
        int newBest = dists[root].first;
        if (newBest == dists[child].first+(int)(colours[child]!=colours[root])) newBest = dists[root].second;
        updateDists(child, root, newBest+(int)(colours[child]!=colours[root]));
    }
}

void solve(){
    cin >> n;

    graph = vector<vector<int> >(n);
    colours = vector<int>(n);
    dists = vector<pair<int, int> >(n, make_pair(0, 0));


    ito(n) cin >> colours[i];

    ito(n-1) {
        int a, b; cin >> a >> b; a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    if (n == 1) {
        cout << 0 << '\n';
        return;
    }

    bool found = false;
    ito(n) {
        if (graph[i].size() == 1) {
            makeDists(i, i);
            updateDists(i, i, 0);
            break;
        }
    }
    int mn = dists[0].first;
    for (auto p : dists) {
        mn = min(mn, p.first);
    }
    cout << mn << '\n';


}


int main(){
    //ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
}
