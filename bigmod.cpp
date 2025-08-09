#include<bits/stdc++.h>
using namespace std;
long long bigmod(long long a,long long int b,long long int m)
{
    if(b==0)return 1%m;
    long long x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
    {
        x=(x*a)%m;
    }
    return x;
}
int main()
{
    long long a,b,m;
    cin>>a>>b>>m;
    cout<<bigmod(a,b,m);
}
