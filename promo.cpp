#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long n,q;
    cin>>n>>q;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    long long s[n];
    for(int i=0;i<n;i++)
    {
        s[i + 1] = s[i] + a[i];
    }
    for(long long i=0;i<q;i++)
    {
        long long x,y;
        cin>>x>>y;
        long long ans=s[x]-s[x-y];
        cout<<ans<<endl;
        ans=0;
    }
}
