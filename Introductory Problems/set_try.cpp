#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
#define endl '\n'



int main() {
    fastio();

    ll n;
    cin>>n;
    int set1_sum = 0;
    int set2_sum = 0;
    set<int>first_set;
    set<int>second_set;
    vector<int>arr(n);
    
    for(int i=0; i<=n-1; i++){
        arr[i] = i+1;
    }

    // For the first set 
    for(int i=0; i< n/2; i+=2){
        first_set.insert(arr[i]);
        first_set.insert(arr[n-i-1]);
        set1_sum += arr[i] + arr[n-i-1];
    }
    // For the Second set
    for(int i=1; i<=n/2; i+=2){
        second_set.insert(arr[i]);
        second_set.insert(arr[n-i-1]);
        set2_sum += arr[i] + arr[n-i-1]; 
    }

    if(set1_sum == set2_sum){
        cout<<"YES"<<"\n";
        cout<<first_set.size()<<endl;
        for(int x:first_set){
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<second_set.size()<<endl;
        for(int x:second_set){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}