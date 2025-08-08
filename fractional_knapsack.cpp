#include<bits/stdc++.h>

using namespace std;
struct A
{
    int wt,pr;
};
bool cmp (A &x ,A &y)
{
    return (x.pr *y.wt>y.pr*x.wt);
}
int main()
{
    int n,w;
    cin>>n>>w;
    vector<A>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].wt;
    }
    for(int i=0;i<n;i++)
    {
        cin>>v[i].pr;
    }
    sort(v.begin(),v.end(),cmp);
    double total=0;
    for(int i=0;i<n;i++)
    {
        int mn=min(v[i].wt,w);
        w-=mn;
        total+=mn*(1.0*v[i].pr/v[i].wt);
    }
    cout<<fixed<<setprecision(3)<<total<<endl;
}
