#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long n;
    cin>>n;
    long long a[n];
    long long mn=INT_MAX,mx=INT_MIN;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    long long cnt_min=0,cnt_max=0;
    long long cnt=0;
    long long ans;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[0])
        {
            cnt++;
        }
    }
    if(cnt==n)
    {
        ans=n*(n-1);
        cout<<ans<<endl;
    }
    else
    {
    for(int i=0;i<n;i++)
    {
        if(a[i]==mn)
        {
            cnt_min++;
        }
        else if(a[i]==mx)
        {
            cnt_max++;
        }
    }
    ans=2*cnt_min*cnt_max;
    cout<<ans<<endl;
    }
    }
    return 0;
}
