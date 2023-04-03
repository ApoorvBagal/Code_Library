#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int> st;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            st.insert(k);
        }
        int s=10-st.size();
        cout<<s*(s-1)/2*6<<endl;
    }
    return 0;
}

