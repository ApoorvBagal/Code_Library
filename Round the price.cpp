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
        int i=0;
        while(n>=pow(10,i))
        {
            i++;
        }
        int ans;
        ans=n-pow(10,i-1);
        cout<<ans<<endl;
    }
}
