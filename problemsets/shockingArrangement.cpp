#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(3e5+1);
int n, a[N];

void solve(){
    cin >> n;
    ito(n) cin >> a[i];

    if(n == 1) {
        NO;
        return;
    }

    vector<int> neg, pos;
    ito(n) {
        if (a[i] < 0) neg.push_back(a[i]);
        else pos.push_back(a[i]);
    }
    vector<int> out;
    if (!pos.empty() && !neg.empty()){
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());
    reverse(neg.begin(), neg.end());
    ll s = pos[pos.size()-1] - neg[neg.size()-1];


    ll sum = 0;
    while (!pos.empty() && !neg.empty()) {
        while (!pos.empty() && sum + pos[pos.size()-1] < s) {
            int num = pos[pos.size()-1];
            out.push_back(num);
            sum += num;
            pos.pop_back();
        }

        if (pos.empty()) break;

        while(!neg.empty() && sum + pos[pos.size()-1] >= s) {
            int num = neg[neg.size()-1];
            out.push_back(num);
            sum += num;
            neg.pop_back();
        }


    }
    while (!neg.empty()) {
        out.push_back(neg[neg.size()-1]);
        neg.pop_back();
    }
    while (!pos.empty()) {
        out.push_back(pos[pos.size()-1]);
        pos.pop_back();
    }
    }
    while (out.size() != n) out.push_back(0);

    YES;

    ito(n) {
        cout << out[i] << ' ';
    }
    cout << '\n';

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
