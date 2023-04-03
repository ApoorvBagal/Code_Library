#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int a[n-1];
        if(min(x,y)==0 && max(x,y)>0 && (n-1)%max(x,y)==0)
        {
            for(int k = 2; k <= n; k += y)
            {
                for(int i = 1; i <= y; i++)
                {
                    cout << k << ' ';
                }
            }
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
