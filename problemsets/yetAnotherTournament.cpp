#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)

using namespace std;

mn(5e5+1);
int n, m, a[N], wins[N];

void solve(){
    cin >> n >> m;
    ito(n) cin >> a[i];

    sort(a, a+n);
    int cwins = 0;
    int lowest = 0;
    int lowestWins = 0;
    int i=0;
    for(; i<n; i++) {
        if (m-a[i] >= 0) {
            m -= a[i];
            cwins++;
        } else {
            break;
        }
    }
    wins[0] = 0;
    for (int j=1; j<n; j++) {
        if (a[j] == a[j-1]) {
            wins[j] = wins[j-1];
            //cout << 'h' << ' ';
        } else {
            wins[j] = j;

        }
        if (j == i) wins[j]++;



    }


    int j = i-1;
    while (i < n && j >= 0) {
        if (wins[j]+1 < cwins) {
            m += a[j];
            wins[j]++;
            cwins--;
        }
        j--;
        if (wins[i]-1 <= cwins+1 && m-a[i] >= 0) {
            cwins++;
            m -= a[i];
            wins[i]--;
            i++;
            cout << "hi" << '\n';
        }
    }

    ito(n) cout << wins[i] << ' ';
    cout << cwins << '\n';






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
