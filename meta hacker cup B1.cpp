#include<bits/stdc++.h>
using namespace std;



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("watering_well_chapter_1_input.txt","r",stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        int n,q;
        cin>>n;
        vector<pair<int,int>> v1;
        vector<pair<int,int>> v2;

        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            v1.push_back(make_pair(a,b));

        }
        cin>>q;
        for(int i=0;i<q;i++)
        {
            int a,b;
            cin>>a>>b;
            v2.push_back(make_pair(a,b));
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            int x1,x2,y1,y2;
            for(int j=0;j<q;j++)
            {

                x1=v1[i].first;
                x2=v2[j].first;
                y1=v1[i].second;
                y2=v2[j].second;
                sum+=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

            }
        }
        cout<<sum%1000000007<<endl;
    }

#endif
}
