#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
#define endl '\n'

int main() {
    fastio();

    string n;
    cin>>n;
    int maximum =0;
    int ans = 0;
    int first = 0;
    int second = 1;
    while(first < n.size()){
        if(n[first] == n[second]){
            ans++;
            maximum = max(ans,maximum);
            first++;
            second++;
        }
        else{
            first++;
            second++;
        }
    }
    if(maximum == 0){
        cout<<1<<"\n";
    }
    else{
        cout<<maximum + 1<<"\n";
    }
    return 0;
}