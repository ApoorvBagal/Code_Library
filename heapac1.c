#include<stdio.h>

void heapify(int a[],int n,int i)
{
    int largest=i;
    int l=2*i;
    int r=2*i+1;

    if(l<n && a[largest]<a[l]){
        largest=l;
    }

    if(r<n && a[largest]<a[r]){
        largest=r;
    }

    if(largest!=i){
        int t=a[i];
        a[i]=a[largest];
        a[largest]=t;

        heapify(a,n,largest);
    }
}
void heapSort(int a[],int n){
    for(int i=n/2-1; i>=0; i--){
        heapify(a,n,i);
    }

    for(int i=n-1; i>=0; i--){
        int t=a[0];
        a[0]=a[i];
        a[i]=t;

        heapify(a,i,0);
    }
}
