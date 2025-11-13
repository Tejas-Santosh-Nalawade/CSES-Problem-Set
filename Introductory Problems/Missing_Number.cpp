// #include <bits/stdc++.h>
// using namespace std;

// #define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
// using ll = long long; 
// #define endl '\n';

// int seqadd(int n){
//     if(n == 0 || n==1){
//         return 1;
//     }
//     else{
//         return n + seqadd(n-1);
//     }
// }

// int main() {
//     fastio();
    
//     ll n;
//     cin>>n;
//     vector<ll>arr(n-1);
//     int sum = 0;
//     for(auto x: arr){
//         cin>>x;
//         sum+=x;
//     }
//     cout<<seqadd(n) - sum <<"\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
#define endl '\n'

int main() {
    fastio();

    ll n;
    cin >> n;

    ll total = n * (n + 1) / 2;

    ll sum = 0, x;
    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        sum += x;
    }

    cout << total - sum << endl;
    return 0; 
}
