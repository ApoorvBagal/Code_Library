#include<bits/stdc++.h>
using namespace std;
void countFreq(int arr[], int n)
{
    // Mark all array elements as not visited
    vector<bool> visited(n, false);

    // Traverse through array elements and
    // count frequencies
    int ans=0;
    for (int i = 0; i < n; i++)
        {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++)
            {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
            ans=max(count,ans);
        }
    }
    if(ans>2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("second_hands_input.txt","r",stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(2*k<n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            countFreq(arr, n);
        }

    }

#endif
}
