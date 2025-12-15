#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;

int main() {
    fastio();

    ll n;
    cin >> n;
    ll ans = 1;
    for(ll k = 1; k<=n; k++){
        ans = ((k*k) * ((k*k)-1))/2 - (4 * (k-1)*(k-2));
        cout<<ans<<"\n";
        ans= 1;
    }
    return 0;
}

