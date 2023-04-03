#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x;
		cin>>n>>m>>x;
		int a[n];
		int freq[10001]={0};
		int b[m+1]={0};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			freq[a[i]]++;
			if(a[i]<=m)
			{
				b[a[i]]++;
			}
		}
		for(int i=1;i<=m;i++)
        {
            cout<<b[i]<<" ";
        }
	}      // Writing output to STDOUT
}
