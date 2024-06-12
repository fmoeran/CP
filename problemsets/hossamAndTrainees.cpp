#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;


int n;
unordered_set<int> nums;

void solve(){
    cin >> n;
    nums.clear();

    int mx = 0;
    ito(n) {
        int x;
        cin >> x;
        nums.insert(x);
        mx = max(mx, x);
    }

    for(int i=3; i <= mx; i++) {
        int j = i;
        bool found = false;
        while (j <= mx) {
            if (nums.count(j)) {

                if (found) {
                    YES;

                    return;
                }
                found = true;
            }
            j += i;
        }
    }
    NO;


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
