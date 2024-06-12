#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(10001);

void solve(){
    int n; cin >> n;
    vector<vector<int> > stacks(n, vector<int>());
    vector<int> nums;
    ito(n) {

        int k; cin >> k;
        jto(k) {
            int num; cin >> num;
            nums.push_back(num);
            stacks[i].push_back(num);
        }
    }
    sort(nums.begin(), nums.end());
    unordered_map<int, int> nexts;
    ito(nums.size()-1) {
        nexts.emplace(nums[i], nums[i+1]);
    }
    int splits = 0;
    for (auto s : stacks) {
        ito(s.size()-1) {
            if (s[i] == nums.back() || nexts.at(s[i]) != s[i+1]) {
                splits++;
            }
        }
    }
    cout << splits << ' ' << n + splits - 1 << '\n';



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
