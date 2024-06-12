
#include<bits/stdc++.h>

#define ll long long
#define mn(x) const ll int N = x;
#define ito(n) for (int i=0; i<n; i++)
using namespace std;


mn(2e5+1);

int n;
ll a[N], b[N];
ll times[N];

int bsearch(const ll arr[], ll n, ll s) {
    int left = 0;
    int right = n-1;
    while (left < right){
        int mid = (left + right) / 2;
        if (arr[mid] == s) return mid;
        else if (arr[mid] < s) left = mid + 1;
        else right = mid - 1;
    }
    for (int i=left; i<n; i++){
        if (arr[i] > s){
            return i;
        }
    }
    return n;

}

bool lt(int q, int r) {
    return times[q] < times[r];
}

void solve(){
    cin >> n;
    ito(n){
        cin >> a[i];
    }
    ito(n){
        cin >> b[i];
    }

    ll sums[n];
    sums[0] = b[0];
    for(int i=1; i<n; i++){
        sums[i] = sums[i-1] + b[i];
    }

    fill(times, times+n, 0);
    ll currentSum = 0;
    times[0] = bsearch(sums, n, a[0]);
    for (int i=1; i<n; i++){
        currentSum += b[i-1];
        times[i] = bsearch(sums, n, a[i] + currentSum);

    }

    ll sortedTea[n];
    ito(n) sortedTea[i] = i;

    sort(sortedTea, sortedTea + n, lt);

    ll out[n];
    int drinkable = 0;
    int ind = 0;
    ito(n){
        drinkable++;
        ll drunk = drinkable * b[i];
        while (ind < n && times[sortedTea[ind]] == i){
            int teaInd = sortedTea[ind];
            int drunkBefore;
            if (teaInd == 0){
                drunkBefore = sums[i];
            }else{
                drunkBefore = sums[i] - sums[teaInd-1];
            }
            int dif = drunkBefore - a[teaInd];
            drunk -= dif;
            drinkable--;

            ind++;
        }
        cout << drunk << ' ';
    }
    cout << '\n';


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
