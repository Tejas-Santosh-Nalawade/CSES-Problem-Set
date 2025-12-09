#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n';

signed main() {
    fastio();
    int tt;
    cin >> tt;
    while (tt--) {
        int x,y;
        cin>>x>>y;
        if(x<=y ){
            if((y&1) == 1){
                cout<<(y*y - x +1)<<"\n";
            }
            else{
                cout<<(y-1)*(y-1) + x<<"\n";
            }
        }
        else{
            if((x&1) == 1){
                cout<<(x-1)*(x-1) + y<<"\n";
            }
            else{
                cout<<(x*x - y + 1)<<"\n";
            }
        }     
    }
    return 0;
}