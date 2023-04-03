#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a;
        cin>>b;
        int j=0;
        int flag=1;
        for(int i=1;i<n-m+1;i++)
        {

            if(a[i-1]!=a[i])
            {
                a[i]=b[j];
            }
        }
        j=0;
        for(int i=n-m;i<n;i++)
        {
                if(a[i]!=b[j])
                {
                    flag=0;
                    break;
                }
                j++;
                //cout<<a[i];
        }
        //cout<<endl;
        /*for(int i=n-m;i<n;i++)
        {
            cout<<a[i]<<" ";
        }*/
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
