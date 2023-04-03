#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter size of string:\n");
    scanf("%d",&n);
    char a[n];
    printf("Enter string\n");
        for(int j=0;j<n+1;j++)
        {
            scanf("%c",&a[j]);
        }
    int num=0;
    for(int i=n;i>=1;i--)
    {
        num=(a[i]-48)*pow(10,n-i)+num;
    }
    printf("the number is:%d\n",num);
    return 0;
}
