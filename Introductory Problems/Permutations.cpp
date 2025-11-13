#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
#define endl '\n'

int main() {
    fastio();

    int n; cin>>n;

    if(n == 1){
        cout<<"1"<<"\n";
    }
    else if(n  == 2 || n == 3){
        cout<<"NO SOLUTION"<<"\n";
    }
    else{
            // Even Number
        for(int i=2; i<=n; i=i+2){
            cout<<i<<" ";
        }

        // Odd Number

        for(int i=1; i<=n; i=i+2){
            cout<<i<<" ";
        }
    }

    
    return 0;
}