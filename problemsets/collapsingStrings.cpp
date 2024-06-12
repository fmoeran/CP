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
    int num;
    map<Node> children;

    Node() {
        num = 0;
        children = map<Node>();
    }

    bool isLeaf() {
        return children.size() == 0;
    }

    bool addChild(char c) {
        if (children.find(c) == children.end()) {
            children[c] = Node();
        }
    }

    bool hasChild(char c) {
        return (children.find(c) != children.end());
    }
};


void solve() {
    int n;
    Node root;
    root.createChildren();

    cin >> n;

    vector<string> strings(n);

    ll total = 0;


    ito(n) {
        string s;
        cin >> s;
        strings[i] = s;
        total += s.size();
        Node* runner = &root;
        for (int j=0; j<s.size(); j++) {
            runner = &runner->children[s[j] - 'a'];
            runner->num++;
            if (runner->children.size() != 26) runner->createChildren();
        }
    }

    total *= 2 * n;

    for (string s : strings) {
        Node* runner = &root;
        for (int i=s.size()-1; i>= 0; i--) {
            runner = &runner->children[s[i]-'a'];
            total -= runner->num*2;
            if (runner->isLeaf()) break;
        }
    }

    cout << total << '\n';




}


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  //cin >> t;
  while (t--) {
#ifdef ONPC
    cout << "================================================\n";
#endif // ONPC
    solve();
  }

  return 0;
}




