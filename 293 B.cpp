#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int visited[n+1]={0};

    for(int i=0;i<n;i++)
    {
        if(visited[i+1]==0)
        {
            visited[a[i]]++;
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            cout<<i<<" ";
        }
    }
}
