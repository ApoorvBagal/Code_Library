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
        int a[n];
        int b[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i]=i;
        }
        if(n==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                if(a[i]==b[i])
                {
                    swap(b[i],b[i+1]);
                }
            }
            if(a[n]==b[n])
            {
                swap(b[n],b[n-1]);
            }
            for(int i=1;i<=n;i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<"\n";
        }
    }
}
