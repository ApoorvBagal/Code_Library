// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long pre[n+1]={0};
        for(int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]+arr[i-1];
        }
        vector<int> v;
        int i=0,j=0;
        while(i<=n && j<=n)
        {
            if(pre[i]-pre[j]==s)
            {

                v.push_back(j+1);
                v.push_back(i);
                break;
            }
            else if(pre[i]-pre[j]<s)
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        if(v.size()==0)
        {
            v.push_back(-1);
        }
        if(v[0]>v[1])
        {
            v.clear();
            v.push_back(-1);
        }
        return v;
        // Your code here
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);

        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;

    }
	return 0;
}  // } Driver Code Ends
