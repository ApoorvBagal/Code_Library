#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long pre[n+1];
    pre[0]=0;
    for(int i=0;i<n;i++)
    {
        pre[i+1]=pre[i]+a[i];
    }
    long long cost=0;
    long long ans=INT_MAX;
    for(int i=1;i<n;i++)
    {
        cost+=pre[i-1];
        for(int j=i;j<n;j++)
        {
            cost+=a[j]-a[i];

        }
        cout<<cost<<endl;
        ans=min(ans,cost);
        cost=0;
    }
    cout<<ans<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

