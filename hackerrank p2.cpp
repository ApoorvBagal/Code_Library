#include<bits/stdc++.h>
using namespace std;
string removespace(string s)
{
    //traversing the string
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            //using in-built function to erase element
            s.erase(s.begin() + i);
            i--;
        }
    }
    return s;
}

int main()
{

        string s;
        getline(cin,s);
        set<char> st;
        string s2=removespace(s);
        for(int i=0;i<s2.length();i++)
        {
            st.insert(s2[i]);
        }
        set<char> st2;
        string s3="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<s3.length();i++)
        {
            st2.insert(s3[i]);
        }
        vector<char> v;
        string s4;
        for(int i=0;i<st.size();i++)
        {
            v.push_back(st[i]);
        }
        sort(v.begin(),v.end());
        if(st.size()==26)
        {
            int flag=1;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]!=s[i])
                {
                    flag=0;
                }
            }
            if(flag)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
