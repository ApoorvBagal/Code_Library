#include<iostream>
#include<vector>
using namespace std;

int main()
{
    /*int t;
    cin>>t;
    while(t--)
    {*/
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
           int x=a[i];
           int k=0;
           for(int j=0;j<n;j++)
           {
               if(a[j]!=x)
               {
                   k^=a[j];
               }
               cout<<"k:"<<k<<endl;
           }
           if(a[i]==k)
           {
               cout<<a[i]<<endl;
               break;
           }
        //}
    //
    }
    return 0;
}
