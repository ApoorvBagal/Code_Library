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
        int a[n];
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        reverse(a,a+n);
        int k;
        int ans=n;
        for(int i=0;i<n;i++)
        {
            if(s.count(a[i]))
            {
                ans=i;
                break;
            }
            else
            {
                s.insert(a[i]);
            }
        }
        cout<<n-ans<<endl;
    }
    return 0;
}
