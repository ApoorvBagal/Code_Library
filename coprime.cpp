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
        int c[1001]={-1};
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            c[a[i]]=i;
        }
        int ans=-1;
        for(int i=1; i<=1000; i++)
        {
            for(int j=i; j<=1000; j++)
            {
                if(c[i]>0 && c[j]>0)
                {
                    if(__gcd(i, j)==1){
                        ans=max(ans, c[i]+c[j]);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;

}




