#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[9][9];
        for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                    if(a[i][j]=='#' && a[i+1][j+1]=='#' && a[i-1][j-1]=='#' && a[i-1][j+1]=='#' && a[i+1][j-1]=='#')
                    {
                        printf("%d %d",i,j);
                    }
            }
        }
        cout<<"\n";

    }
}
