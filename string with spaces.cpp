#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {

    int l;
    cin>>l;
    char s[1000];
    cin.getline(s, 100);
    int cnt=0;
    for(int i=0;i<l-2;i++)
    {
        if(s[i]=='a' && s[i+1]=='p' && s[i+2]=='s')
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

