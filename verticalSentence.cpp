#include <bits/stdc++.h>
using namespace std;

//capitalbaazi
char upper(char c)
{
    return c - 32;
}

int main()
{
    while (1)
    {
        string s;
        cin >> s;
        if (s.length() == 0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                s[i] = upper(s[i]);
            }
            cout << s << endl;
        }
    }
}