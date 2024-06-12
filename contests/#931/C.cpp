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



void solve() {
    int n, m; cin >> n >> m;
    int a, b, c, d;
    cout << "? " << 1 << ' ' << 1 << endl;

    cin >> a;
    if (a == 0) {
        cout << '!' << ' ' << 1 << ' ' << 1 << endl;
        return;
    }
    int ax = min(n, 1+a);
    int ay = 2+a-ax;
    cout << '?' << ' ' << ax << ' ' << ay << endl;
    cin >> b;
    if (b == 0) {
        cout << '!' << ' ' << ax << ' ' << ay << endl;
        return;
    }
    int x1=0, y1=0;
    if (b%2==0) {
        x1 = ax-b/2;
        y1 = ay+b/2;
    }


    int by = min(m, 1+a);
    int bx = 2+a-by;
    cout << '?' << ' ' << bx << ' ' << by << endl;
    cin >> c;
    if (c == 0) {
        cout << '!' << ' ' << bx << ' ' << by << endl;
        return;
    }

    int x2=0, y2=0;
    if (c%2==0) {
        x2 = bx+c/2;
        y2 = by-c/2;
    }

    if (!x1) {
        cout << "! " << x2 << ' ' << y2 << endl;
    }else if (!x2) {
        cout << "! " << x1 << ' ' << y1 << endl;
    }else {
        cout << '?' << ' ' << x1 << ' ' << y1 << endl;
        cin >> d;
        if (d == 0) {
            cout << '!' << ' ' << x1 << ' ' << y1 << endl;
        }else {
            cout << '!' << ' ' << x2 << ' ' << y2 << endl;
        }
    }


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




