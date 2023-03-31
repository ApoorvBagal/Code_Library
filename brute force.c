#include<stdio.h>
#include<string.h>

int brute(char t[],char p[])
{
    int m=strlen(p);
    int n=strlen(t);

    for(int i=0;i<=n-m;i++)
    {
        int j=0;
        while(j<m && p[j]==t[i+j])
        {
            j++;
        }

        if(j==m)
            return 1;

    }
    return -1;
}

int main()
{
    char t[10];
    char p[5];

    strcpy(t,"aaaabbbbcc");
    strcpy(p,"aacbb");

    int l=brute(t,p);

    if(l==1)
    {
        printf("Item found");
    }
}
