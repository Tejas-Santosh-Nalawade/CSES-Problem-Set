#include<iostream>
using namespace std;

void Weird_Algo(long long n)
{
    cout<<n;
    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
        }
        else
        {
            n=3*n+1;
        }
        cout<<" "<<n;
    }
}

int main()
{
    long long n;
    cin>>n;
    Weird_Algo(n);
    return 0;

}