#include<stdio.h>
int cost[5][5]={{0,3,1000,7,1000},{3,0,4,2,1000},{1000,4,0,5,6},{7,2,5,0,4},{1000,1000,6,4,0}};
int dist[5],path[5];
int visited[5];
int source, u;
int minimum(int dist[])
{
    int index, min=9999;
    for(int i=0; i<5; i++)
    {
        if(visited[i]!=1)
        {
            if(dist[i]<min)
            {
                min=dist[i];
                index=i;
            }
        }
    }
    return index;
}
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    printf("Enter source:");
    scanf("%d", &source);
    u=source;
    for(int i=0; i<5; i++)
    {
        dist[i]=cost[source][i];
        path[i]=u;
        visited[i]=0;
    }
    visited[u]=1;
    for(int i=0; i<5; i++)
    {
        u=minimum(dist);
        visited[u]=1;
        for(int j=0; j<5; j++)
        {
            if(visited[j]==0)
            {
                int m=min(dist[j], dist[u]+cost[u][j]);
                if(dist[j]!=m)
                {
                    dist[j]=m;
                    path[j]=u;
                }
            }
            visited[u]=1;
        }
    }
    for(int i=0; i<5; i++)
    {
        printf("%d %d\n", dist[i], path[i]);
    }
}
