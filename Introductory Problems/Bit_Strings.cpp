#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;

int main() {
    fastio();

    ll n;
    cin >> n;
    ll mod = 1e9 + 7;

    ll ans = 1;
    for(ll i = 0; i < n; i++){
        ans = (ans * 2) % mod; 
    }
    cout << ans << "\n";

    
    return 0;
}

