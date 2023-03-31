#include<iostream>
using namespace std;

int main()
{
  string s;
  cin>>s;
  //swap(s[0],s[1]);
  for(int i=0;i<s.length()/2;i++)
  {
    swap(s[2*i],s[2*i+1]);
  }
  cout<<s<<endl;
}
