#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for(int i=0; i<n; i++)
#define jto(n) for(int j=0; j<n; j++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;




void solve(){
    string s;
    cin >> s;

    if (s.size() == 1) {
        cout << s << '\n';
        return;
    }

    int counts[26];
    fill(counts, counts+26, 0);
    ito(s.size()) counts[s[i]-'a']++;

    int last;
    for (int i=25; i>=0; i--) {
        if (counts[i] != 0) {
            last = i;
            break;
        }
    }
    int l = 0;
    int r = s.size()-1;
    vector<char> out(s.size(), ' ');
    char single = ' ';
    int i = 0;
    for(; i<26; i++) {
        char c = (char)('a'+i);
        if (counts[i] == 0) continue;
        else if (counts[i] == 1) {
            if (single == ' ') single = c;
            else {
                out[l] = single;
                out[r] = c;
                l++; r--; i++;
                single = ' ';
                break;
            }
        }else {
            if (single == ' ' || i == last){
                out[l] = c;
                out[r] = c;
                counts[i] -= 2;
                l++; r--;
                i--;
            }else {
                out[l] = single;
                single = ' ';
                l++;
                break;
            }
        }
    }
    for (; i < 26; i++) {
        char c = (char)('a'+i);
        if (counts[i] == 0) continue;
        while (counts[i] != 0) {
            out[r] = c;
            r--;
            counts[i]--;
        }
    }
    if (single != ' ') out[l] = single;

    bool rev = false;
    ito(s.size()) {
        if (out[i] > out[out.size()-1-i]) {
            break;
        }else if (out[i] < out[out.size()-1-i]) {
            rev = true;
            break;
        }
    }

    if (rev){
        reverse(out.begin(), out.end());
    }

    ito(s.size()) cout << out[i];
    //ito(26) cout << counts[i] << ' ';
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
