#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
#define endl '\n'

int main() {
    fastio();

    int n;cin>>n;
    int zeroes= 0;
    while(n){
        n /= 5;
        zeroes += n;
    }
    cout<<zeroes<<endl;
    return 0;
}