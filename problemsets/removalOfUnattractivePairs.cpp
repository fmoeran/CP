#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define all(v) v.begin(), v.end()
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(2e5+2);
char a[N];
int counts[26], n;



void solve(){
    fill(counts, counts+26, 0);
    cin >> n;
    ito(n) {
        cin >> a[i];
        counts[a[i]-'a']++;
    }

    sort(counts, counts+26, greater<int>());
    int s = accumulate(counts+1, counts+26, 0);
    cout << max(n%2, counts[0]-s) << '\n';

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    cin >> T;
    while (T--){
        solve();
    }
}
