#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        list<int> s;
        for(int i=0;i<n;i++)
        {
            char ch;
            cin>>ch;
            s.push_back(ch);
        }
        list<int> t;
        t.push_back(*s.begin());
        cout<<*s.begin()<<endl;
        int i=2;
        list<int>::iterator it;
        while(s.size()!=0)
        {
            it=s.begin()
            if(i%2==0)
            {
                if(*s.end()==0)
                {
                    t.push_back(*s.end());
                    s.pop_back();
                }
                else
                {
                    t.push_front(*s.end());
                    s.pop_back();
                }
            }
            else
            {
                if(*s.end()==0)
                {
                    t.push_back(*s.begin());
                    s.pop_front();
                }
                else
                {
                    t.push_front(*s.begin());
                    s.pop_front();
                }
            }
            i++;
        }

        for (it = t.begin(); it != t.end(); ++it)
        {
            cout<< *it;
        }
    cout << '\n';
    }
	// your code goes here
	return 0;
}
