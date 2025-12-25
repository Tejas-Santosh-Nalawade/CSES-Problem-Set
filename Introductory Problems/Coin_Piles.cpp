#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
#define endl '\n'

int main() {
    fastio();

    int tt;
    cin >> tt;
    while (tt--) {
        ll a,b;
        cin>>a>>b;
        int value = a + b; 
        if(value % 3 !=0){
            cout<<"NO\n";
        } 
        else if (max(a,b) > 2*min(a,b)){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
    return 0;
}