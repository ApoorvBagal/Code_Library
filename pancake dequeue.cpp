#include<iostream>
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
        int j=n-1,i=0;
        int count=0;
        int maximum=a[0];
        while(i<j)
        {
            if(a[i]<a[j])
            {
                if(a[i]>=maximum)
                {
                   count++;
                }

                maximum=max(maximum,a[i]);
                i++;

            }
            else
            {
                if(a[j]>=maximum)
                {
                    count++;
                }
                //j--;
                maximum=max(maximum,a[j]);
                j--;

            }
        }
        if(a[i]>=maximum)
        {
            count++;
        }
        cout<<count<<endl;

    }
}
