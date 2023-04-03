#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define v2i vector<vi>
#define ii pair<int, int>
#define F first
#define S second
#define len(s) (int)s.size()
#define quicksilver



signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long  a[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
        int k = n;
        cout << k << '\n';
        int ind = 0;
        while (k--)
        {
            for (auto x : a)
            {
                cout << x << ' ';
            }
            cout << '\n';
            if (k>0)
            {
                swap(a[ind], a[ind + 1]);
            }
            ind++;
        }
    }
    return 0;
}
