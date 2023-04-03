#include<bits/stdc++.h>
using namespace std;

float median(int trailing_days[],int d)
{
    sort(trailing_days,trailing_days+d);
    if(d%2==1)
    {
        return trailing_days[d/2];
    }
    else
    {
        float sum=trailing_days[d/2]+trailing_days[d/2-1];
        return ((sum)/2.0);
    }
}

int main()
{
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<median(a,n);
}
