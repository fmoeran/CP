#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+1);
int n;
ll c, k;
ll depths[N];
unordered_set<int> seen;
vector<vector<int> > graph;
ll profit;

void getDepths(int root) {

    seen.insert(root);
    for (int child : graph[root]) {
        if (seen.find(child) != seen.end()) continue;
        getDepths(child);
        depths[root] = max(depths[root], depths[child] + 1);
    }
}

void getBest(int root, ll current, ll depth) {
    seen.insert(root);
    ll m1=0, m2=0;
    for (int child : graph[root]) {
        if (seen.find(child) != seen.end()) continue;
        m2 = max(m2, depths[child]+1);
        if (m2 > m1) swap(m2, m1);
    }
    m2 = max(m2, current);
    if (m1 < m2) swap(m1, m2);
    ll newProfit = m1*k - depth*c;
    profit = max(profit, newProfit);
    for (int child : graph[root]) {
        if (seen.find(child) != seen.end()) continue;
        ll newCurrent = m1;
        if (depths[child] + 1 == newCurrent) {
            newCurrent = m2;

        }
        newCurrent = max(newCurrent, current);
        newCurrent++;
        getBest(child, newCurrent, depth+1);
    }
}


void solve(){
    graph.clear();
    seen.clear();
    cin >> n >> k >> c;
    graph = vector<vector<int> >(n, vector<int>());
    fill(depths, depths+n, 0);
    ito(n-1) {
        int a, b; cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    getDepths(0);
    if (c >= k) { // don't want to move
        cout << depths[0] * k << '\n';
    }else {
        seen.clear();
        profit = 0;
        getBest(0, 0, 0);
        cout << profit << '\n';
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
