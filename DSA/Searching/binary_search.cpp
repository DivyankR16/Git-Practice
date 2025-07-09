#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)

void solve(){
    ll n, target;
    cin >> n >> target;
    vector<ll> a(n);
    forn(i, n) cin >> a[i];
    ll l = 0;
    ll r = n - 1;
    while(l<=r){
        ll m = l + (r - l) / 2;
        if(a[m]==target){
            cout << "FOUND" << "\n";
            return;
        }
        else if(a[m] < target ){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    cout << "UNKNOWN" << "\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}