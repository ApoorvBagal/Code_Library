#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        sum+=a[i];
    }
    sort(a,a+n,greater<int>());
    long long s2=0;
    for(int i=0;i<n;i++)
    {
        s2+=a[i];
        if(s2>sum-s2)
        {
            cout<<i+1<<endl;
            break;
        }
    }
}
