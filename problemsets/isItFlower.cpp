#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;



void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > graph(n, vector<int>());
    ito(m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int k = (int)sqrt((float)n);
    if (k * k != n || k * (k + 1) != m || k <= 2) {
        NO;
        return;
    }
    ito(n) {
        if (graph[i].size() != 4 && graph[i].size() != 2){
            NO;
            return;
        }
    }

    unordered_set<int> seen;

    for (int node=0; node<n; node++) {
        if (graph[node].size() == 4) continue;
        else if (seen.find(node) != seen.end()) {
            continue;
        }
        seen.insert(node);

        int lsize = 1;
        int runner = graph[node][0];
        int prev = node;

        while (graph[runner].size() != 4) {
            if (runner == node || lsize > k || seen.find(runner) != seen.end()) {
                NO;
                return;
            }

            seen.insert(runner);
            lsize++;
            if (graph[runner][0] != prev) {
                prev = runner;
                runner = graph[runner][0];
            }else {
                prev = runner;
                runner = graph[runner][1];
            }
        }
        int join = runner;
        runner = graph[node][1];
        prev = node;
        while (graph[runner].size() != 4) {
            if (runner == node || lsize > k || seen.find(runner) != seen.end()) {
                NO;
                return;
            }
            seen.insert(runner);
            lsize++;
            if (graph[runner][0] != prev) {
                prev = runner;
                runner = graph[runner][0];
            }else {
                prev = runner;
                runner = graph[runner][1];
            }
        }
        lsize++;
        if (lsize != k || runner != join) {
            NO;
            return;
        }
    }
    int node=0;
    for (; node<n; node++) {
        if (seen.find(node) == seen.end()) break;
    }
    while(true) {
        seen.insert(node);
        bool changed = false;
        for (auto next : graph[node]) {
            if (seen.find(next) == seen.end()) {
                node = next;
                changed = true;
                break;
            }
        }
        if (!changed) {
            break;
        }
    }

    if (seen.size() == n) {
        YES;
    }else {
        NO;
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
