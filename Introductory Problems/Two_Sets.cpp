#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
#define endl '\n'



int main() {
    fastio();

    ll n;
    cin>>n;

    ll Total_sum = 1LL * (n * (n + 1)) / 2;

    if(Total_sum % 2 !=0){
        cout<<"NO"<<endl;
        return 0;
    }
    
    cout<<"YES"<<endl; 
    vector<int>a,b;     
        if(n%4 == 0){
            for(int i=1;i<=n;i+=4){
                a.push_back(i);
                a.push_back(i+3);
                b.push_back(i+1);
                b.push_back(i+2);
            }
        }
        else{
            a.push_back(1);
            a.push_back(2);
            b.push_back(3);
            for(int i=4;i<=n;i+=4){
                a.push_back(i);
                a.push_back(i+3);
                b.push_back(i+1);
                b.push_back(i+2);
            }
        }
    cout<<a.size()<<endl;
    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<b.size()<<endl;
    for(auto x:b){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}