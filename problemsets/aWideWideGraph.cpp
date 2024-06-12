#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(1e5+1);
int n, distances[N];
bool seen[N], updated[N];
vector<pair<int, int>> maxs;
vector<vector<int> > graph;

void update(int node, int value) {
    updated[node] = true;
    distances[node] = max(maxs[node].first, value);
    for (int child: graph[node]) {
        if (updated[child]) continue;
        int mx = maxs[node].first;
        if (mx == maxs[child].first+1) mx = maxs[node].second;
        update(child, max(value, mx) + 1);
    }

}

void traverse(int node) {
    seen[node] = true;
    int mx1 = 0, mx2 = 0;
    for (int child : graph[node]) {
        if (seen[child]) continue;
        traverse(child);
        int newScore = maxs[child].first + 1;
        if (newScore > mx2) {
            mx2 = newScore;
            if (mx2 > mx1) {
                swap(mx2, mx1);
            }
        }
    }
    maxs[node].first = mx1;
    maxs[node].second = mx2;
}


void solve(){

    cin >> n;
    fill(seen, seen+n, false);
    fill(updated, updated+n, false);
    fill(distances, distances+n, 0);
    graph.clear();
    graph = vector<vector<int> >(n);
    maxs = vector<pair<int, int> >(n);
    ito(n-1) {

        int a, b; cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    ito(n) {
        if (graph[i].size() > 1) {
            traverse(i);
            update(i, 0);
            break;
        }
    }
    if (n == 2) {
        distances[0] = 1;
        distances[1] = 1;
    }

    sort(distances, distances+n);
    int total = 1;
    int ind = 0;
    for (int k=1; k<=n; k++) {
        while (ind < n && distances[ind] < k) {
            ind++;
            total++;
        }
        if (ind != n) cout << total << ' ';
        else cout << n << ' ';
    }


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
