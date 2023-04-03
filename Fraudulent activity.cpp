#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

double median(int *a, int d)
{
    /*for(int i=0;i<d;i++)
    {
        cout<<a[i]<<" ";
    }*/
    sort(a, a + d);

    // check for even case
    if (d % 2 != 0)
    {
        return (double)a[d / 2];
    }
    return (double)(a[(d - 1) / 2] + a[d / 2]) / 2.0;
}

/*
 * Complete the 'activityNotifications' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY expenditure
 *  2. INTEGER
 */

int activityNotifications(vector<int> expenditure, int d)
{
    int ans=0;
    for(int i=d;i<expenditure.size();i++)
    {
        int a[d]={0};
        for(int j=0;j<d;j++)
        {
            a[j]=expenditure[i-d+j];
            //cout<<a[j]<<" ";
        }
        double k=median(a,d);
        //cout<<"median:"<<k<<" ";
        //cout<<expenditure[i]<<" ";
        if(expenditure[i]>=2*k)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int d = stoi(first_multiple_input[1]);

    string expenditure_temp_temp;
    getline(cin, expenditure_temp_temp);

    vector<string> expenditure_temp = split(rtrim(expenditure_temp_temp));

    vector<int> expenditure(n);

    for (int i = 0; i < n; i++) {
        int expenditure_item = stoi(expenditure_temp[i]);

        expenditure[i] = expenditure_item;
    }

    int result = activityNotifications(expenditure, d);

    cout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
