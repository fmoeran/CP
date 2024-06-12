#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


int n, m, ind;

vector<vector<int> > vecs;

bool ltvec(vector<int>& v1, vector<int>& v2) {
    ito(v1.size()) {
        if (v1[i] < v2[i]) return true;
        else if (v1[i] > v2[i]) return false;

    }
    return false;
}

bool lt (vector<int>& v1, vector<int>& v2) {
    return v1[ind] < v2[ind];
}


void solve(){
    cin >> n >> m;
    vecs.clear();

    ito(n) {
        vector<int> v(m);
        jto(m) {
            cin >> v[j];
            v[j]--;
        }
        vecs.push_back(v);
    }
    vector<vector<int> > svecs(vecs.begin(), vecs.end());
    sort(svecs.begin(), svecs.end(), ltvec);



    ito(n) {
        int k = 0;

        int l = 0, r = n;
        for(ind = 0; ind < m; ind++)
        {
            l = lower_bound(svecs.begin(), svecs.begin(), vecs[i][ind], lt)
            r = upper_bound(svecs.begin()+l, svecs.begin()+r, vecs[i][ind], lt);
            cout << l << ' ' < r << '\n';
        }

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
