#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

int n;
vector<pair<int, int>> nums;
vector<int> starts;

void solve(){
    cin >> n;
    nums = vector<pair<int, int>>(n);
    starts = vector<int>(n+2);
    ito(n) cin >> nums[i].first;
    ito(n) cin >> nums[i].second;
    sort(all(nums));
    fill(all(starts), n);
    starts[nums[0].first] = 0;
    for (int i=1; i<n; i++) {
        if (nums[i].first == nums[i-1].first) continue;
        for (int j=nums[i-1].first+1; j<=nums[i].first; j++) starts[j] = i;
    }

    int out = 0;
    for (int i=0; i<n; i++) {
        auto [a, b] = nums[i];
        int start = max((b+a)/a, a+1);
        int stop = min((n+b+1)/a+1, n+1);
        //cout << start << ' ' << stop << ' ';
        int total = 0;
        for (int num=start; num<stop; num++) {
            //cout << num << ' ' << distance(nums.begin()+starts[num], nums.begin()+starts[num+1]) << '\n';
            auto lower = lower_bound(nums.begin()+starts[num], nums.begin()+starts[num+1], make_pair(num, a*num-b));
            auto upper = upper_bound(nums.begin()+starts[num], nums.begin()+starts[num+1], make_pair(num, a*num-b));
            total += distance(lower, upper);
        }

        out += total;
        while (i<n-1 && nums[i+1] == nums[i]) {
            out += total;
            i++;
        }
    }


    for (int i=0; i<n; i++) {
        auto [a, b] = nums[i];
        auto lower = lower_bound(nums.begin()+i+1, nums.end(), make_pair(a, a*a-b));
        auto upper = upper_bound(nums.begin()+i+1, nums.end(), make_pair(a, a*a-b));
        out += distance(lower, upper);
    }

    cout << out << '\n';


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
