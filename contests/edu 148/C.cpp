#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(3e5+1);
int n, a[N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];
    vector<int> nums;
//    if (n == 1) {
//        cout << 1 << '\n';
//        return;
//    }else if (n==2 && a[0] == a[1]) {
//        cout << 1 << '\n';
//        return;
//    }else if (n == 2 && a[0] != a[1]) {
//        cout << 2 << '\n';
//        return;
//    }
    nums.push_back(a[0]);
    for (int i=1; i<n; i++) {
        if (a[i] != nums.back()) nums.push_back(a[i]);
    }
    if (nums.size() == 1) {
        cout << 1 << '\n';
        return;
    }
    int total = 2;
    for (int i=1; i<nums.size()-1; i++) {
        if (nums[i-1] < nums[i] && nums[i] > nums[i+1] ) total++;
        else if (nums[i-1] > nums[i] && nums[i] < nums[i+1]) total++;
    }
    cout << total << '\n';




}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
}
