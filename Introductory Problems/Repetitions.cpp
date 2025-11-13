// #include <bits/stdc++.h>
// using namespace std;

// #define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
// using ll = long long;
// #define endl '\n'

// int main() {
//     fastio();
//     string n;
//     cin>>n;
//     int maximum = 1;
//     int ans = 1;
//     int first = 0;
//     int second = 1;
//     while(first < n.size() && second<n.size()){
//         if(n[first] == n[second]){
//             ans++;
//             first++;
//             second++;
//         }
//         else{
//             ans = 1;
//             first++;
//             second++;
//         }
//         maximum = max(ans,maximum);
//     }
//     cout<<maximum<<"\n";
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
#define endl '\n'


void solve(string s, int n){

    for(char x: s){
        cin>>x;
    }
    int maximum = 1;
    int ans = 1;
    for(int i=0; i<n; i++){
        if(s[i] == s[i+1]){
            ans++;
        }else{
            ans = 1;
        }
        maximum = max(maximum , ans); 
    }
    cout<<maximum<<"\n";    
}

int main() {
    fastio();
    string s;cin>>s;
    int n = s.size();
    solve(s,n);
}