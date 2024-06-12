#include<bits/stdc++.h>


using namespace std;

#define ll long long
#define mn(x) const ll N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define loop(n)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

struct Node {
    char val;
    int l, r;

    bool isLeaf() {return l == -1 && r == -1;}
};

mn(3e5+1);
int n;
Node nodes[N];



int getMinPath(Node node) {
    if (node.isLeaf()) return 0;
    int left = N, right = N;
    if (node.l != -1) {
            left = getMinPath(nodes[node.l]);
            left += (node.val != 'L');
    }
    if (node.r != -1) {
            right = getMinPath(nodes[node.r]);
            right += (node.val != 'R');
    }

    return min(left, right);
}

void solve() {
    cin >> n;
    string s; cin >> s;
    ito(n) {
        nodes[i].val = s[i];
        int l, r;
        cin >> l >> r;
        l--; r--;
        nodes[i].l = l;
        nodes[i].r = r;
    }

    cout << getMinPath(nodes[0]) << '\n';

}


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  cin >> t;
  while (t--) {
#ifdef ONPC
    cout << "================================================\n";
#endif // ONPC
    solve();
  }

  return 0;
}




