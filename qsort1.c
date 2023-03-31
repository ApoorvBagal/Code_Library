#include<stdio.h>
main()
{
    int n,a[10],i,j;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("enter the values\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,(n-1));
    printf("the sorted elements are \n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
void quicksort(int a[10],int l,int r)
{
    if(l<r)
    {
        int p=partition(a,l,r);
        quicksort(a,l,(p-1));
        quicksort(a,(p+1),r);
    }
}
int partition(int a[10],int l,int h)
{
    int pivot=a[h];
    int i=l;
    int temp;
    for(int k=l;k<h;k++)
    {
        if(a[k]>=pivot)
        {
            temp=a[k];
            a[k]=a[i];
            a[i]=temp;
            i++;
        }
    }
    temp=a[i];
    a[i]=pivot;
    a[h]=temp;
    return i;
}

