#include<bits/stdc++.h>
using namespace std;

struct edge{
int x;
int y;
};

void union_(int arr[],int u,int v,int n)
{
    int temp;
    temp = arr[u];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==temp)
        {
            arr[i]=arr[v];
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    struct edge e[m];
    for(int i=0;i<m;i++)
    {
        int j,k;
        cin>>j>>k;
        e[i].x=j-1;
        e[i].y=k-1;
    }
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    for(int i=0;i<m;i++)
    {
        int u,v;
        u=e[i].x;
        v=e[i].y;
        union_(a,u,v,n);
    }
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
    cout<<s.size()<<endl;
    return 0;
}
