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
    int n;
    cin >> n;
    vector<int> temp(n);
    ito(n) cin >> temp[i];
    sort(temp.begin(), temp.end());
    vector<int> nums;
    for (int val : temp) {
        if (nums.empty() || nums.back() != val) {
            nums.push_back(val);
        }
    }
    if (nums.size() == 1) {
            cout << "Alice\n";
            return;
    }else if (nums.size() == 2) {
        if (nums[0] == 1) cout << "Bob\n";
        else cout << "Alice\n";
        return;
    }

    bool alice = false;
    for (int i=nums.size()-2; i>=1; i--) {

        int dif = nums[i] - nums[i-1];
        if (dif == 1 || alice) alice = !alice;
    }

    if (!alice && nums[0] > 1) {
        alice = true;
    }


    if (alice) {
        cout << "Alice\n";
    }else {
        cout << "Bob\n";
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




