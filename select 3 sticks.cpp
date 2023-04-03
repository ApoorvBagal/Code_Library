#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int k=0;
        long long cost=0;
        long long ans=INT_MAX;
        for(int i=1;i<n-1;i++)
        {
            cost+=a[i+1]-a[i-1];
            ans=min(ans,cost);
            cost=0;
        }
        cout<<ans<<endl;
    }
}
