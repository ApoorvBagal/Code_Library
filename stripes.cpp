#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c[9][9];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>c[i][j];
            }
        }

        for(int i=0;i<8;i++)
        {
            int red_cnt=0;
            for(int j=0;j<8;j++)
            {
                if(c[i][j]=='R')
                {
                    red_cnt++;
                }
            }
            if(red_cnt==8)
            {
                cout<<"R"<<endl;
                break;
            }
        }
        for(int i=0;i<8;i++)
        {
            int blue_cnt=0;
            for(int j=0;j<8;j++)
            {
                if(c[j][i]=='B')
                {
                    blue_cnt++;
                }
            }
            if(blue_cnt==8)
            {
                cout<<"B"<<endl;
                break;
            }
        }
    }
    return 0;
}



