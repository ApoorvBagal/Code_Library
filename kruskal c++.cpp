#include<iostream>
#include<algorithm>
using namespace std;
struct edge{
int x;
int y;
int weight; //weight
};
int Find(int arr[],int u,int v)
{
    if(arr[u]==arr[v])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool compare(struct edge a,struct edge b)
{
    if(a.weight < b.weight)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
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
    int n,e;
    cout<<"enter no of nodes: "<<endl;
    cin>>n;
    cout<<"Enter no. of edges: "<<endl;
    cin>>e;
    struct edge a[e];
    for(int i=0;i<e;i++)
    {
        cout<<"enter the vertices and weights between them: "<<endl;
        cin>>a[i].x>>a[i].y>>a[i].weight;
    }
    sort(a,a+n,compare);
    int arr[e];
    for(int i=0;i<e;i++)
    {
        arr[i]=i;
    }
    int cost=0;
    for(int i=0;i<n;i++)
    {
        int u=a[i].x;
        int v=a[i].y;
        if(Find(arr,u,v)==1)
        {
            i++;
        }
        else
        {
            cost=cost+a[i].weight;
            union_(arr,u,v,n);
            arr[u]=arr[v];
        }
    }
    cout<<cost<<endl;
}


