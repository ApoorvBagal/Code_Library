#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int key,int n)
{
    int l=0,r=n-1;
    int mid;
    cout<<key<<"   ";
    while(l<r)
    {
        mid=(l+r)/2;
        if(a[mid]==key)
        {
            return mid+1;
        }
        else if(a[mid]>key)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin>>t;
    for(int x=1;x<=t;x++)
    {
        printf("Case #%d: ",x);
        int n;
        cin>>n;
        vector<int> a;
        int b[n];
        int k;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            a.push_back(k);
            b[i]=a[i];
        }
        //sort(b,b+n);
        vector<int>::iterator it;
        for(int i=0;i<a.size();i++)
        {

            it=lower_bound(a.begin(),a.end(),2*a[i]);
            int k=it-a.begin();
            cout<<a[k]<<" ";
        }
    }
    cout<<"\n";
}
