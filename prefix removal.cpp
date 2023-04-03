#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int k=s.length();
        for(int i=1;i<k-1;i++)
        {
            if(s[i]==s[0])
            {
                s.erase(0,1);
            }

        }
        cout<<s<<endl;
    }
}
