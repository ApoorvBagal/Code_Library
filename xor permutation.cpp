#include<iostream>
#include<vector>
using namespace std;

int main()
{
    /*int n;
    cin>>n;*/
    int ans;
    for(int i=0;i<2;i++)
    {
        int k;
        cin>>k;
        ans^=k;
    }
    cout<<ans<<endl;

}
