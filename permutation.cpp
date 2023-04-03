#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"2"<<endl;
        for(int i=0;i<n;i++)
        {
            if(pow(2,i)<=n)
            {
                cout<<pow(2,i)<<" ";
            }
        }
        for(int i=3;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
    }
}
