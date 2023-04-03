#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=0;
        int mx=a[0];
        for(int i=0;i<n;i++)
        {
            mx=max(mx,a[i]);
            if(s[i]=='1')
            {
                cout<<mx<<endl;
                ans+=mx;
            }
            mx=a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}

