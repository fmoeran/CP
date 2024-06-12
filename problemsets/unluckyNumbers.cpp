#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)


using namespace std;




void solve(){
    string a, b;
    cin >> a >> b;

    if (a.size() != b.size()) {
        ito(a.size()) cout << 9;
        cout << '\n';
        return;
    }

    char mn, mx;


    int ind = 0;
    while (ind < a.size() && a[ind] == b[ind]){
        cout << a[ind];
        ind++;
    }
    a = a.substr(ind, a.size());
    b = b.substr(ind, b.size());



    if (a[0]+1 < b[0]) {
        ito(a.size()) cout << (char)(a[0]+1);
        cout << '\n';
        return;
    }
    else {
        int i = 0;
        while (i < a.size() && a[0] == a[i]) i++;
        if (i == a.size()) {
            cout << a << '\n';
            return;
        }
        if (a[i] < a[0]) {
            ito(a.size()) cout << a[0];
            cout << '\n';
            return;
        }
        int adif = a[i] - a[0];
        int ai = i;
        i = 0;
        while (i < b.size() && b[0] == b[i]) i++;
        if (i == b.size()) {
            cout << b << '\n';
            return;
        }
        if (b[i] > b[0]) {
            ito(b.size()) cout << b[0];
            cout << '\n';
            return;
        }
        int bdif = b[0] - b[i];
        int bi = i;
        if (adif < bdif) {
            ito(ai) cout << a[i];
            for (int j=ai; j<a.size(); j++) cout << a[ai];
            cout << '\n';
        }else {
            ito(bi) cout << b[i];
            for (int j=bi; j<b.size(); j++) cout << b[bi];
            cout << '\n';
        }
        return;

    }

    cout << 0 << '\n';
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
