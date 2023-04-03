#include<bits/stdc++.h>
using namespace std;

int Search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
}

void leftRotate(int arr[], int r, int n)
{
    // base case: invalid input
    r=r%n;

    // construct an auxiliary array of size `r` and
    // fill it with the first `r` elements of the input array
    int aux[r];
    for (int i = 0; i < r; i++) {
        aux[i] = arr[i];
    }

    // shift the remaining `n-r` elements of the input array at the beginning
    for (int i = r; i < n; i++)
    {
        arr[i-r] = arr[i];
    }

    // put the elements of the auxiliary array at their
    // correct positions in the input array
    for (int i = n-r; i < n; i++)
    {
        arr[i] = aux[i-(n-r)];
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("consecutive_cuts_chapter_1_validation_input.txt","r",stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int x=0;x<n;x++)
        {
            cin>>arr[x];
        }
        int brr[n];
        for(int x=0;x<n;x++)
        {
            cin>>brr[x];
        }
        int rot=Search(arr,n,brr[0]);
        if(k>0)
        {
            leftRotate(arr,rot,n);
        }

        int flag=1;
        /*for(int x=0;x<n;x++)
        {
            cout<<arr[x]<<" ";
        }*/
        for(int x=0;x<n;x++)
        {
            if(arr[x]!=brr[x])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    #endif
}


