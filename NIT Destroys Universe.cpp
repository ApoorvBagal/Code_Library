#include<iostream>
#include<algorithm>
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
        int cnt=0;
        int flag=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=0 && a[i-1]==0)
            {
                cnt++;
            }
        }

        int k=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                k++;
            }
        }
        if(a[0]!=0)
        {
            cnt++;
        }
        cnt=min(cnt,2);
        cout<<cnt<<endl;

    }
}
