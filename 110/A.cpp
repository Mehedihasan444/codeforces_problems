#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    string s;
    s = to_string(n);
    int c = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {

            c++;
        }
    }
    if (c == 4 || c == 7)
    {

        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
    return 0;
}