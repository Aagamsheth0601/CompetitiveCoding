#include <bits/stdc++.h>
using namespace std;

//Codechef
//Shuffling Parities

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
            {
                odd++;
            }
        }
        cout << min(odd, n / 2) + min(n - odd, n - (n / 2)) << endl;
    }
}