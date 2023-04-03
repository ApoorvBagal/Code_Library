#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int r, int n)
{
    // base case: invalid input
    if (r < 0 || r >= n)
    {
        return;
    }

    int aux[r];
    for (int i = 0; i < r; i++) {
        aux[i] = arr[i];
    }

    for (int i = r; i < n; i++) {
        arr[i-r] = arr[i];
    }

    for (int i = n-r; i < n; i++)
    {
        arr[i] = aux[i-(n-r)];
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=a[n-1]-a[0];
        for(int i=0;i<n;i++)
        {
            leftRotate(a,i,n);
            ans=max(ans,a[n-1]-a[0]);
        }
        cout<<ans<<endl;
    }
    return 0;
}

