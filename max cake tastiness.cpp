#include<iostream>
#include<stdlib.h>
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
        int maximum=a[0];
        sort(a, a + n);
        int res=a[n-1]+a[n-2];
        cout<<res<<endl;
    }
}
