#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n, m;

void solve(){
    cin >> n >> m;
    int total = 0;
    vector<int> counts(n, 0);
    vector<vector<bool> > vecs(n, vector<bool>());
    ito(n) {
        int current = 0;
        jto(m){
            int num; cin >> num;
            current += num;
            vecs[i].push_back((bool)num);
        }
        total += current;
        counts[i] = current;
    }
    if (total % n != 0) {
        cout << -1 << '\n';
        return;
    }
    int ones = total / n;
    int totalChange = 0;
    for (int c : counts) {
        totalChange += abs(ones - c);
    }
    cout << totalChange / 2 << '\n';
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
