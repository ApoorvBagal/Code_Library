#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int cost[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>cost[i][j];
        }
    }
    int s=pow(2,n);
    int dp[s];
    dp[0]=0;
    for(int i=1;i<s;i++)
    {
        dp[i]=100000;
    }
    for(int mask=0;mask<s;mask++)
    {
        string s=bitset<8>(mask).to_string();
        //cout<<s<<endl;
        int k=countSetBits(mask);
        for(int j=0;j<n;j++)
        {
            if(s[7-j]=='0')
            {
                dp[mask | 1<<j]=min(dp[mask]+cost[k][j],dp[mask | 1<<j]);
            }
        }

    }
    for(int i=0;i<s;i++)
    {
        cout<<dp[i]<<" ";
    }

}
