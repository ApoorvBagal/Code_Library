#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u')
            {
                cnt++;
            }
            else
            {
                cnt=0;
            }
            ans=max(cnt,ans);
        }

        if(ans>2)
        {
            cout<<"Happy"<<endl;
        }
        else
        {
            cout<<"Sad"<<endl;
        }
    }
	// your code goes here
	return 0;
}
