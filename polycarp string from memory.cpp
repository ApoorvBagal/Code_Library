#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        set<char> st;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            st.insert(s[i]);
            if(st.size()>3)
            {
                ans++;
                st.clear();
                st.insert(s[i]);
            }
        }
        if (!st.empty())
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
