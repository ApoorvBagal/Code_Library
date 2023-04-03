//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m)
{
    int l=0,r=n-1;
    int flag=1;
    int cnt=0;
    sort(a1,a1+n);
    for(int i=0;i<m;i++)
    {
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        // Check if x is present at mid
        if (a1[mid] == a2[i])
            cnt++;
        // If x greater, ignore left half
        if (a1[mid] < a2[i])
            l = mid + 1;

        // If x is smaller, ignore right half
        else
            r = mid - 1;
    }
    }
    cout<<cnt<<" ";
    if(cnt==m)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}
