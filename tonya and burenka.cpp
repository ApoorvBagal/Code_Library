#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        if((m+n)%2==1)
        {
            cout<<"Burenka"<<endl;
        }
        else
        {
            cout<<"Tonya"<<endl;
        }
    }
    return 0;
}
