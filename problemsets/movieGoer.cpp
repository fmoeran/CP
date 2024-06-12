#include<bits/stdc++.h>

#define ll long long


using namespace std;

const ll N = 1e6 + 1;

int n, m;
int a[N], s[N];

int main(){
    cin >> n >> m;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<m; i++){
        cin >> s[i];
    }
    ll maxi = 0;
    ll current = 0;
    unordered_set<int> watching;
    unordered_set<int> doubles;
    for (int i=0; i<n; i++){
        int nextItem = a[i];
        int nextScore = s[nextItem];
        if (watching.find(nextItem) == watching.end()) {
            watching.insert(nextItem);
            current += nextScore;
        }else{
            if (doubles.find(nextItem) == doubles.end()) continue;
            if (current - nextScore < nextScore){
                watching.clear();
                doubles.clear();
                current = nextScore;
            }
        }
        maxi = max(maxi, current);
    }
    cout << maxi << endl;



}