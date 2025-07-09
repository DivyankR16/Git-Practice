#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)

void solve(){
    ll n,target;
    cin >> n>>target;
    vector<ll> a(n);
    forn(i, n) cin >> a[i];
    bool res = false;
    for (auto e:a){
        if(e==target){
            res = true;
            break;
        }
    }
    if(res){
        cout << "FOUND" << "\n";
    }
    else{
        cout << "UNKNOWN" << "\n";
    }
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