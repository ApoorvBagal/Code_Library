#include<stdio.h>
int main()
{
    for(int i=1;i<50;i++)
    {
        for(int j=1;j<50;j++)
        {
            if((i-j)>i/j && (i+j)>i*j)
            {
                printf("%d %d\n",i,j);
            }
        }
    }
}
