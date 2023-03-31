#include<stdio.h>

int n=4;

void display(int a[][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void warshall(int a[][n])
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((a[k][j]+a[i][k]) < a[i][j])
                    a[i][j] = (a[i][k] + a[k][j]);
            }
        }
    }

    display(a);
}

int main()
{
    int a[4][4]={{0,999,3,999},
                 {2,0,999,999},
                 {999,7,0,1},
                 {6,999,999,0}};

    warshall(a);
}

