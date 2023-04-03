#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mn=a[0];
        int mx=a[0];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
            if(mx-mn>2*x)
            {
                cnt++;
                mx=a[i];
                mn=a[i];
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
