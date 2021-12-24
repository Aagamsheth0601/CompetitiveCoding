#include <bits/stdc++.h>
using namespace std;

//Codechef
//Travel Pass

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, ans = 0;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                ans += a;
            }
            else
            {
                ans += b;
            }
        }
        cout << ans << endl;
    }
}