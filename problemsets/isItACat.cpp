#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;

using namespace std;

int s;
char word[52];
const char letters[] = "meow";

void solve(){
    cin >> s;
    cin >> word;
    int letter = 0;

    for (int i=0; i<s && letter < 4; i++){
        char c = word[i];
        if (c == letters[letter] || c-'A'+'a' == letters[letter]) continue;
        else if (letter == 3) letter = 4;
        else if (c == letters[letter + 1] || c-'A'+'a' == letters[letter + 1]) letter++;
        else letter = 4;
    }
    if (letter == 3) cout << "YES" << '\n';
    else cout << "NO" << '\n';


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int t;
    cin >> t;
    for (t; t!= 0; t--){
        solve();
    }
}