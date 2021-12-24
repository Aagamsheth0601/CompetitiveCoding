#include <bits/stdc++.h>
using namespace std;
//CodeChef
//Airline

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if ((a + b <= d && c <= e) || (a + c <= d && b <= e) || (b + c <= d && a <= e))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}