#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k=1;
        cout<<"Case #"<<k<<":"<<endl;
        int r,c;
        cin>>r>>c;
        k++;
        for(int i=0;i<2*r+1;i++)
        {
            for(int j=0;j<2*c+1;j++)
            {
                if(i==0)
                {
                    if(j<2)
                        printf(".");
                    else
                    {
                    if(j%2==0)
                    {
                        printf("+");
                    }
                    else
                    {
                        printf("-");
                    }
                    if(j==2*c)
                        printf("\n");
                    }
                }
                if(i==1)
                {
                    if(j<2)
                        printf(".");
                    else
                {
                    if(j%2==0)
                    {
                        printf("|");
                    }
                    else
                    {
                        printf(".");
                    }
                    if(j==2*c)
                        printf("\n");
                }
                }
                if(i%2==0 && i>1)
                {
                    if(j%2==0)
                    {
                        printf("+");
                    }
                    else
                    {
                        printf("-");
                    }
                    if(j==2*c)
                    {
                        printf("\n");
                    }
                }
                if(i%2==1 && i>1)
                {
                    if(j%2==0)
                    {
                        printf("|");
                    }
                    else
                    {
                        printf(".");
                    }
                    if(j==2*c)
                    {
                        printf("\n");
                    }
                }

            }
        }
    }
}

