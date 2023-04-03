#include <iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k=0;
        int k2=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && gcd(a[i],a[j])==1)
                {
                    cout<<a[i]<<" "<<a[j]<<endl;
                    k++;
                }
            }
            cout<<k<<endl;
            if(k>1)
            {
                k2++;
            }
            k=0;
        }
        int ans=0;
        if(k2==1)
        {
            ans=1;
        }
        else if(k2==0)
        {
            ans=n;
        }
        cout<<ans<<endl;
	// your code goes here
	return 0;
}
