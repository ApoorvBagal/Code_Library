#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        vector<char> v;
        for(int i=0;i<n;i++)
        {
            char val=s[i];
            if(find(v.begin(), v.end(), val)==end(v))
            {
                v.push_back(val);
                cnt+=2;
            }
            else
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

