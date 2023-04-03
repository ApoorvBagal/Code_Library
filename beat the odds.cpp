#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int m=x-a;
        int n=y-b;
        if((max(0,m)+max(0,n))<=c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
