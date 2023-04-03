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
        int sum=0;
        int xmax=0,ymax=0;
        int xmin=0,ymin=0;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            xmax=max(xmax,x);
            ymax=max(ymax,y);
            xmin=min(xmin,x);
            ymin=min(ymin,y);
        }
        sum=xmax-xmin+ymax-ymin;
        cout<<2*sum<<endl;
    }
}
