#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int maximum;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
        {
            maximum=a[0];
        }
        maximum=max(maximum,a[i]);
    }
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(i!=j && k!=j && i!=k)
                {
                    sum=a[i]+a[j]+a[k];
                    v.push_back(sum);
                }
            }
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>maximum)
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(a[i]==v[j])
            {
                cout<<v[j]<<" ";
                cout<<"YES"<<endl;
                break;
            }
        }
    }*/
}
