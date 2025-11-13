#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;

int main() {
    fastio();

    ll n;
    cin >> n;
    vector<ll> result;
    result.push_back(n);

    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        result.push_back(n);
    }

    for (auto x : result)
        cout << x << " ";

    return 0;
}


// #include<iostream>
// using namespace std;

// void Weird_Algo(long long n)
// {
//     cout<<n;
//     while(n!=1)
//     {
//         if(n%2==0)
//         {
//             n/=2;
//         }
//         else
//         {
//             n=3*n+1;
//         }
//         cout<<" "<<n;
//     }
// }

// int main()
// {
//     long long n;
//     cin>>n;
//     Weird_Algo(n);
//     return 0;

// }