#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;

mn(10);
int m;


void solve(){
    cin >> m;
    vector<array<int, 3> > counts;
    array<int, 3> a;
    string s;
    ito(m) {
        cin >> s;
        a[0] = 0; a[1] = 0; a[2] = 0;
        jto(3) {
            if      (s[j] == 'w') a[0]++;
            else if (s[j] == 'i') a[1]++;
            else if (s[j] == 'n') a[2]++;
        }
        counts.push_back(a);

    }
    array<bitset<N>, 3> extras;
    array<bitset<N>, 3> missing;
    ito(m) {
        jto(3) {
            if (counts[i][j] > 1) extras[j].set(i);
            else if (counts[i][j] == 0) missing[j].set(i);
        }
    }
    ito(m) {
        if (counts[i][0] == counts[i][1]
            && counts[i][1] == counts[i][2]) continue;

        int mx = distance(counts[i].begin(), max_element(counts[i].begin(), counts[i].end()));
        if (counts[i][mx] == 3) {

        }else { //2
            int mn = distance(counts[i].begin(), min_element(counts[i].begin(), counts[i].end()));\
            int swapInd = (missing[mx] & extras[mn])._Find_first();
            //cout << swapInd << ' ';

            cout << missing[mx] <<' ' << extras[mn] << '\n';

        }

    }
    //cout << bitset<4>(8)._Find_first();

    //cout << '\n';


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
