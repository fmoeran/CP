#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n;

void solve(){
    cin >> n;
    vector<vector<int> > graph(n);
    ito(n) {
        string s; cin >> s;
        jto(n) {
            if (s[j] == '1') graph[j].push_back(i);
        }
    }

    vector<int> topo;
    stack<int> s;
    unordered_set<int> seen;
    ito(n) {
        if (seen.find(i) != seen.end()) continue;

        s.push(i);
        seen.insert(i);

        while (!s.empty()) {
            int node = s.top();

            for (int child : graph[node]) {
                if (seen.find(child) != seen.end()) continue;
                s.push(child);
                seen.insert(child);
                break;
            }
            if (s.top() == node) {
                topo.push_back(node);
                s.pop();
            }
        }
    }
    vector<vector<int> > outs(n);
    ito(n) outs[i].push_back(i);
    for (int i : topo) {
        for (int link : graph[i]) {
            outs[i].push_back(link);
        }
        //cout << i << ' ' << graph[i].size() << '\n';
    }
    for (auto vec : outs) {
        cout << vec.size() << ' ';
        for (int num : vec) cout << num + 1 << ' ';
        cout << '\n';
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
