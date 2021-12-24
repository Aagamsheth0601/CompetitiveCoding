#include <bits/stdc++.h>
using namespace std;

//Monk and his love for primes
char upper(char c)
{
    return c - 32;
}

char lower(char c)
{
    return c + 32;
}
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = lower(s[i]);
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = upper(s[i]);
        }
    }

    cout << s;
}