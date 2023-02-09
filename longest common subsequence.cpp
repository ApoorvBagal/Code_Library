#include<iostream>
using namespace std;
int main()
{
  string s1,s2;
  cin>>s1>>s2;
  int len1=s1.length(),len2=s2.length();
  int lcs[len1+1][len2+1];
  for(int i=0;i<len1+1;i++)
  {
      lcs[i][0]=0;
  }
  for(int j=0;j<len2+1;j++)
  {
      lcs[0][j]=0;
  }
  for(int i=1;i<len1+1;i++)
  {
      for(int j=1;j<len2+1;j++)
      {
          if(s1[i-1]==s2[j-1])
          {
              lcs[i][j]=lcs[i-1][j-1]+1;
          }
          else
          {
              lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
          }
      }
  }
  cout<<lcs[len1][len2];
}
