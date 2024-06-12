#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


mn(1010);
int n, parent[N], sizes[N];

void makeSet(int v) {
    parent[v] = v;
    sizes[v] = 1;
}

int findSet(int v) {
    if (parent[v] == v) return v;
    else return parent[v] = findSet(parent[v]);
}



void solve(){
    vector<pair<int, int> > closures;
    vector<int> sets;
    cin >> n;
    ito(n) makeSet(i);
    ito(n-1) {
        int a, b; cin >> a >> b; a--; b--;
        int as = findSet(a); int bs = findSet(b);
        if (as != bs) {
            if (sizes[as] < sizes[bs]) swap(as, bs);
            sizes[as] += sizes[bs];
            parent[bs] = as;
        }
        else {
            closures.push_back(make_pair(a, b));
        }
    }
    cout << closures.size() << '\n';
    ito(n) {
        if (parent[i] == i) {
            sets.push_back(i);
        }
    }
    ito(sets.size()-1) {
        auto close = closures.back();
        closures.pop_back();
        cout << close.first + 1 << ' ' << close.second + 1 << ' ';
        cout << sets[i] + 1 << ' ' << sets[i+1] + 1 << '\n';
    }
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
